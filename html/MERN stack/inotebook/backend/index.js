const mongoose = require('mongoose');
const express = require('express');
const cors = require('cors');

const app = express();
const port = 5000;

app.use(express.json());
app.use(cors());

// Database Connection
mongoose.connect('mongodb://127.0.0.1:27017/yourDB-name', {
  useNewUrlParser: true,
  useUnifiedTopology: true,
})

  .then(() => {
    console.log('Connected to op database');
  })
  .catch((err) => {
    console.error('Error connecting to the database:', err);
  });

// User Schema
const UserSchema = new mongoose.Schema({
  name: {
    type: String,
    required: true,
  },
  email: {
    type: String,
    required: true,
    unique: true,
  },
  date: {
    type: Date,
    default: Date.now,
  },
});

const User = mongoose.model('User', UserSchema);

// Routes
app.get('/', (req, res) => {
  res.send('App is Working');
});

app.post('/register', async (req, res) => {
  try {
    const user = new User(req.body);
    const result = await user.save();
    const response = result.toObject();
    delete response.password;
    res.json(response);
    console.log(response);
  } catch (e) {
    console.error('Error while registering user:', e);
    res.status(500).json({ error: 'Something Went Wrong' });
  }
});

// Start the server
app.listen(port, () => {
  console.log(`App listening at port ${port}`);
});




// const connectToMongo = require('./db')
// const express = require('express')

// connectToMongo();
// const app = express()
// const port = 3000

// // app.get('/', (req, res) => {
// //   res.send('Hello World!');
// // });
// // app.get('/Signin', (req, res) => {
// //   res.send('This EndPoint is Sign in')
// // })
// // app.get('/Login', (req, res) => {
// //   res.send('This EndPoint is Log in')
// // })

// // app.use('/api/auth', require('./routes/auth'))
// // app.use('/api/notes', require('./routes/notes'))
// //available routes

// app.use(express.json())

// app.use('/api/auth', require('./routes/auth'))
// app.use('/api/notes', require('./routes/notes'))


// connectToMongo().then(() => {
// app.listen(port, () => {
//   console.log(`Example app listening on port ${port}`)
// });
// }).catch((err)=>{
// console.log('Failed')
// });

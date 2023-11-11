const express = require('express');
const User = require('../models/User');
const router = express.Router();


router.get('/', (req, res) => {
      
    console.log(req.body);
    
    const user= User(req.body);
    user.save();
    res.send(req.body);
    } )

module.exports = router

// router.use(express.json());
//create a note using POST "/api/auth/". doesn't require auth
// res.json([]);
// console.log(req.body);
      // res.send("Hello");
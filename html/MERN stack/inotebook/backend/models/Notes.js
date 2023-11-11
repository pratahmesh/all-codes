const mongoose = require ('mongoose');

const Notesschema = new Schema({
    note: {
        type: String,
        required: true
    },
    description: {
        type: String,
        required: true,
    },
    tag: {
        type: String,
        default: "General"
    },
    date: {
        type: Date,
        required: Date.now
    }
});

module.exports = mongoose.model('notes',Notesschema);
 
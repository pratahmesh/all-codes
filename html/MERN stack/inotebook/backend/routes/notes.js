const express = require('express');
const router = express.Router();

router.get('/', (req, res) => {
      obj= {
        a: "option",
        number: 78
      }
      res.json(obj)
    } )

module.exports = router
const { request, response } = require('express');
const express = require('express');
const app = express();
app.listen(3333);

var body = require('body-parser');
const bodyParser = require('body-parser');
app.use(bodyParser.json());
var produtos = [];

//localhost:3333/
app.get('/produtos', (request, response) => {
    return response.json(produtos);
})

app.post('/produtos', (request, response) =>{
    console.log(request.body);
    produtos.push(request.body);
    return response.send("Tudo ok!");
})

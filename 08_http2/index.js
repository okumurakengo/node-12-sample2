const http = require('http2');
const fs = require('fs');

const options = {
  key: fs.readFileSync('example.key'),
  cert: fs.readFileSync('example.crt')
 };

http.createSecureServer(options, function (req, res) {
  res.write('Hello World!');
  res.end();
}).listen(3000);

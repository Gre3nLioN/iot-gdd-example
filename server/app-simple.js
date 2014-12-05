var express = require('express');
var path    = require('path');
var favicon = require('serve-favicon');
var logger = require('morgan');
var cookieParser = require('cookie-parser');
var bodyParser = require('body-parser');
var http = require('http');


var app = express();
// uncomment after placing your favicon in /public

app.use(logger('dev'));
app.set('port', process.env.PORT || 3000);
app.use(bodyParser.json());
app.set('view engine', 'ejs');
app.use(bodyParser.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, './public')));


// development error handler
// will print stacktrace
if (app.get('env') === 'development') {
    app.use(function(err, req, res, next) {
        res.status(err.status || 500);
        res.render('error', {
            message: err.message,
            error: err
        });
    });
}

// production error handler
// no stacktraces leaked to user
app.use(function(err, req, res, next) {
    res.status(err.status || 500);
    res.render('error', {
        message: err.message,
        error: {}
    });
});



module.exports = app;
var server =http.createServer(app);
server.listen(app.get('port'), function(){
  console.log('Express server listening on port ' + app.get('port'));
});



var router = express.Router();

router.post('/api/v1/plant/stats/:id', function(req,res){
  console.log('postStatus',req.body );

      var stats = {
          envTemperature: parseFloat(req.body.envTemperature),
          envHumidity: parseFloat(req.body.envHumidity),
          soilTemperature: parseFloat(req.body.soilTemperature)
      };

      res.json('OK');
   

});

app.use(router);
# Intent ParseUri Module for Titanium Mobile

## Usage 
```javascript
var yoIntentParser = require('ti.intent.parseuri');
yoIntentParser.parseUri('intent://pay?srCode=0000000#Intent;scheme=shinhan-sr-ansimclick;package=com.shcard.smartpay;end;');
/*
	Result : 
	{
	    "packageName": "com.shcard.smartpay",
	    "error": false,
	    "data": "shinhan-sr-ansimclick://pay?srCode=0000000"
	}
 */
```

This module use `Intent.parseUri(url, Intent.URI_INTENT_SCHEME);`.

function EchoLocation(address, location) {
  if(location == null) {
    WScript.Echo(address + ": " + "null");
    return;
  }
  WScript.Echo(address + ": " + location.City + ", " + location.Country + "; " + location.Latitude + ", " + location.Longitude);
}

locations = new ActiveXObject("AlaxInfo.MaxMindGeoLite.LazyLocations");

elapsedTime = 0;
for(; ; ) {
  if(locations.Initialized)
    break;
  WScript.Echo("Initializing (" + elapsedTime + " seconds) ...");
  //EchoLocation("alax.info", locations.Item("alax.info"));
  WScript.Sleep(5000);
  elapsedTime += 5;
}

EchoLocation("alax.info", locations.Item("alax.info"));
EchoLocation("luxriot.com", locations.Item("luxriot.com"));


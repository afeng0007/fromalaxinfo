function EchoLocation(address, location) {
  if(location == null) {
    WScript.Echo(address + ": " + "null");
    return;
  }
  WScript.Echo(address + ": " + location.City + ", " + location.Country + "; " + location.Latitude + ", " + location.Longitude);
}

locations = new ActiveXObject("AlaxInfo.MaxMindGeoLite.LazyLocations");

for(; ; ) {
  if(locations.Initialized)
    break;
  WScript.Echo("Initializing...");
  //EchoLocation("alax.info", locations.Item("alax.info"));
  WScript.Sleep(5000);
}

EchoLocation("alax.info", locations.Item("alax.info"));
EchoLocation("luxriot.com", locations.Item("luxriot.com"));


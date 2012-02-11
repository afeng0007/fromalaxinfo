function EchoLocation(address, location) {
  WScript.Echo(address + ": " + location.City + ", " + location.Country + "; " + location.Latitude + ", " + location.Longitude);
}

locations = new ActiveXObject("AlaxInfo.MaxMindGeoLite.Locations");
EchoLocation("alax.info", locations.Item("alax.info"));
EchoLocation("luxriot.com", locations.Item("luxriot.com"));


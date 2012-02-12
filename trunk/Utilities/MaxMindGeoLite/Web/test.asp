<%@Language="JScript"%>
<%
    geoLocations = new ActiveXObject("AlaxInfo.MaxMindGeoLite.LazyLocations");
    //geoLocation = geoLocations.Item("alax.info");
    geoLocation = geoLocations.Item("80.92.234.64");
%>
<html>
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1">
  <title>Alax.Info - MaxMind - Geolocation</title>
</head>
<style>
</style>
<body>
    <h1>Status</h1>
    <ul>
        <% if(geoLocations != null) { %>
            <li>geoLocations: not null</li>
            <li>geoLocations.Initialized: <% =geoLocations.Initialized %></li>
            <% if(geoLocation != null) { %>
                <li>geoLocation: not null</li>
                <li>geoLocation.City: <% =geoLocation.City %></li>
            <% } else { %>
                <li>geoLocation: null</li>
            <% } %>
        <% } else { %>
            <li>geoLocations: null</li>
        <% } %>
    </ul>
</body>
</html>

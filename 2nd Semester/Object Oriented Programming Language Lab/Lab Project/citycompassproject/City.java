// Part 2: Abstract Class - Defines the base class for cities
// Abir

package com.mycompany.citycompassproject;


abstract class City {
    protected String name;

    public City(String name) {
        this.name = name;
    }

    public abstract String getAccommodationDetails();
    public abstract String getPlacesToExploreDetails();
    public abstract String getMarketPlaceDetails();

    public String getCityName() {
        return name;
    }
}

// Part 3: Subclasses for Specific Cities
// Jawad

package com.mycompany.citycompassproject;


class Istanbul extends City {
    public Istanbul() {
        super("Istanbul");
    }

    @Override
    public String getAccommodationDetails() {
        return """
                1. Ramada Plaza - A luxurious 5-star hotel located in the Sisli district, offering fine dining and a rooftop pool.
                2. Grand Faith Hotel - A cozy 3-star hotel in Refik Caddesi, ideal for budget travelers.
                3. The Marmara Taksim - A premium hotel at the heart of Istanbul, offering stunning city views and modern amenities.
                """;
    }

    @Override
    public String getPlacesToExploreDetails() {
        return """
                1. Galata Tower - A medieval stone tower with panoramic views of the Bosphorus.
                2. The Blue Mosque - An architectural marvel known for its blue tiles and domes.
                3. Topkapi Palace - A historical palace showcasing Ottoman artifacts and grandeur.
                """;
    }

    @Override
    public String getMarketPlaceDetails() {
        return """
                1. Istinye Park Mall - A modern mall with luxury brands and entertainment.
                2. The Grand Bazaar - One of the world's oldest covered markets with thousands of shops.
                3. Spice Bazaar - Famous for exotic spices, Turkish delights, and dried fruits.
                """;
    }
}

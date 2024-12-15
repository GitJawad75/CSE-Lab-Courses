// Part 3: Subclasses for Specific Cities
// Jawad
package com.mycompany.citycompassproject;

class Kathmandu extends City {
    public Kathmandu() {
        super("Kathmandu");
    }

    @Override
    public String getAccommodationDetails() {
        return """
                1. Hyatt Regency - A luxurious 5-star resort offering Himalayan views.
                2. Hotel Yak & Yeti - A heritage hotel blending modern amenities with Nepalese charm.
                3. Fairfield by Marriott - A modern hotel offering comfort and convenience.
                """;
    }

    @Override
    public String getPlacesToExploreDetails() {
        return """
                1. Swayambhunath Stupa - The Monkey Temple with panoramic valley views.
                2. Pashupatinath Temple - A UNESCO World Heritage Site and a sacred Hindu temple.
                3. Durbar Square - A historical complex of palaces, temples, and courtyards.
                """;
    }

    @Override
    public String getMarketPlaceDetails() {
        return """
                1. Thamel Market - A tourist area with shops selling handicrafts and trekking gear.
                2. Durbar Square Market - Surrounded by ancient temples and palaces.
                3. Asan Bazaar - A vibrant local market for spices, textiles, and fresh produce.
                """;
    }
}
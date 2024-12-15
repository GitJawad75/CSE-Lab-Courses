// Part 3: Subclasses for Specific Cities
// Jawad

package com.mycompany.citycompassproject;


class Dhaka extends City {
    public Dhaka() {
        super("Dhaka");
    }

    @Override
    public String getAccommodationDetails() {
        return """
                1. Pan Pacific Sonargaon Hotel - A luxurious 5-star hotel with traditional hospitality.
                2. Hotel 71 - A budget-friendly option in the heart of Dhaka.
                3. Radisson Blu Water Garden - A premium hotel with serene gardens and modern facilities.
                """;
    }

    @Override
    public String getPlacesToExploreDetails() {
        return """
                1. Lalbagh Fort - A Mughal fort offering a glimpse into Dhaka's rich history.
                2. Ahsan Manzil - The Pink Palace, a historic residence of Dhaka's Nawabs.
                3. Hatirjheel - A beautiful lake area, perfect for evening strolls and boating.
                """;
    }

    @Override
    public String getMarketPlaceDetails() {
        return """
                1. Bashundhara City - One of South Asia's largest malls with shops and eateries.
                2. New Market - A bustling hub for bargain shopping.
                3. Jamuna Future Park - A modern shopping mall with entertainment and dining options.
                """;
    }
}
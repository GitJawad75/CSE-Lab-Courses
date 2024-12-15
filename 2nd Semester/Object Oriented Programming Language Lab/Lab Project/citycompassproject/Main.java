
package com.mycompany.citycompassproject;

import javax.swing.*;
import java.awt.*;


public class Main {
    public static void main(String[] args) {
        SignUp.signUp();

        JFrame mainFrame = new JFrame("CityCompass - Explore the World");
        mainFrame.setSize(700, 500);
        mainFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        mainFrame.setLayout(new GridLayout(2, 2, 10, 10));

        // Buttons for cities
        JButton istanbulButton = createCityButton("Explore Istanbul", new Istanbul(), new Color(173, 216, 230)); // Light Sky Blue
        JButton dhakaButton = createCityButton("Explore Dhaka", new Dhaka(), new Color(221, 160, 221)); // Plum
        JButton kathmanduButton = createCityButton("Explore Kathmandu", new Kathmandu(), new Color(240, 128, 128)); // Light Coral

        // Add city buttons to the main frame
        mainFrame.add(istanbulButton);
        mainFrame.add(dhakaButton);
        mainFrame.add(kathmanduButton);

        mainFrame.setVisible(true);
    }

    private static JButton createCityButton(String label, City city, Color color) {
        JButton button = new JButton(label);
        button.setBackground(color);
        button.addActionListener(e -> openServiceFrame(city));
        return button;
    }

    private static void openServiceFrame(City city) {
        JFrame serviceFrame = new JFrame("CityCompass - " + city.getCityName());
        serviceFrame.setSize(700, 500);
        serviceFrame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        serviceFrame.setLayout(new GridLayout(1, 3, 10, 10));

        JButton accommodationButton = createServiceButton("Accommodation", city.getAccommodationDetails(), new Color(135, 206, 235)); // Sky Blue
        JButton placesButton = createServiceButton("Places to Explore", city.getPlacesToExploreDetails(), new Color(216, 191, 216)); // Thistle
        JButton marketButton = createServiceButton("Marketplace", city.getMarketPlaceDetails(), new Color(255, 182, 193)); // Light Pink

        serviceFrame.add(accommodationButton);
        serviceFrame.add(placesButton);
        serviceFrame.add(marketButton);

        serviceFrame.setVisible(true);
    }

    private static JButton createServiceButton(String label, String details, Color color) {
        JButton button = new JButton(label);
        button.setBackground(color);
        button.addActionListener(e -> JOptionPane.showMessageDialog(null, details, label, JOptionPane.INFORMATION_MESSAGE));
        return button;
    }
}
    


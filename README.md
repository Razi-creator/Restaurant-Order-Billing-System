# Restaurant-Order-Billing-System
A C++ console application for meal ordering, tax calculation, and currency conversion.

# 📖 Overview
This project is a straightforward terminal-based application that simulates a restaurant's ordering and billing process. It allows users to choose from a menu of traditional chicken dishes, input their desired quantity, and instantly calculate the total cost. Beyond basic multiplication, the program implements a tiered sales tax system and provides the final bill in multiple currencies, making it a great showcase of conditional logic and basic arithmetic operations in C++.

# ✨ Features
## Interactive Menu:
Displays a clear, formatted menu featuring various dishes (like Chicken Karahi, Chicken Tikka, and Creamy Chicken) along with their per-kg prices in Pakistani Rupees (PKR).

## Tiered Tax Calculation: 
Automatically applies a conditional sales tax to the total bill:
Bills between 1000 and 3000 PKR incur a 2% tax.
Bills exceeding 3000 PKR incur a 5% tax.

## Multi-Currency Support:
Users can choose to view their final, tax-inclusive total in their preferred currency, with built-in conversion rates for:
Pakistani Rupee (PKR)
US Dollar (USD)
Euro (EUR)

# 🛠️ Technical Details
## Language:
C++

## Libraries Used: 
iostream

Key Concepts: Uses if/else if control structures for menu selection, mathematical operators for tax and currency conversion calculations, and const variables for fixed exchange rates.

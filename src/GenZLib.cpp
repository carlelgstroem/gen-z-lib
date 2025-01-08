// src/GenZLib.cpp

#include "gen_z_lib/GenZLib.hpp"
#include <vector>
#include <random>
#include <ctime>
#include <unordered_map>
#include <algorithm>
#include <sstream>
#include <iostream> // Add this line for log_entry definition

namespace GenZLib {

    GenZ::GenZ() {
        // Constructor implementation (if needed)
    }

    GenZ::~GenZ() {
        // Destructor implementation (if needed)
    }

    std::string GenZ::reverseString(const std::string& input) {
        return std::string(input.rbegin(), input.rend());
    }

    void GenZ::rizz_print(const std::string& message) {
        // Using printf to print the message
        printf("%s\n", message.c_str());
    }

    std::string GenZ::getGenZSlang() {
        // Predefined list of Gen Z slang words
        static const std::vector<std::string> slangWords = {
            "No cap",          // No lie/truth
            "Bet",             // Yes/OK
            "Flex",            // Show off
            "Lit",             // Exciting/fun
            "Stan",            // Overzealous fan
            "Ghosting",        // Suddenly stopping communication
            "Salty",           // Bitter/angry
            "Slaps",           // Really good (music, etc.)
            "Tea",             // Gossip
            "Shade",           // Disrespect
            "Savage",          // Ruthlessly honest
            "Ship",            // Support a relationship
            "Snatched",        // Perfect appearance
            "Vibe Check",      // Assess the mood
            "Woke",            // Socially aware
            "Yeet",            // Throw or express excitement
            "Fam",             // Friends/family
            "Clout",           // Influence/popularity
            "Drip",            // Stylish appearance
            "Cap",             // Lie
        };

        // Initialize random number generator
        static std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
        std::uniform_int_distribution<std::size_t> dist(0, slangWords.size() - 1);

        // Select and return a random slang word
        return slangWords[dist(rng)];

        
    }

    void GenZ::sheeshLog(const std::string& message) {
        // Prefix the message with "Sheesh!" and print using printf
        std::cout << "Sheeeesh! " << message << std::endl; 
    }

    std::string getRandomEmoji() {
        std::vector<std::string> emojiBank = {
            "💅", "✨", "🔥", "💀", "🙌", "😤", "🫡", "💯", "😎", "🤩"
        };
        int randomIndex = rand() % emojiBank.size();
        return emojiBank[randomIndex];
    }

    std::string convtZspeak(const std::string &input){
        std::unordered_map<std::string, std::string> genzDictionary = {
            {"hello", "yo"},
            {"hi", "hey"},
            {"cool", "skibidi"},
            {"amazing", "fire"},
            {"good", "goated"},
            {"bad", "mid"},
            {"yes", "bet"},
            {"no", "nah"},
            {"friend", "bestie"},
            {"angry", "pressed"},
            {"excited", "hyped"},
            {"great", "sigma"},
            {"tired", "done"},
            {"party", "vibe"},
            {"work", "grind"},
            {"money", "bag"}};

        std::string lowerInput = input;
        std::transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);

        std::stringstream ss(lowerInput);
        std::string word, zString;
        while (ss >> word)
        {
            if (genzDictionary.find(word) != genzDictionary.end())
            {
                zString += genzDictionary[word] + " ";
            }
            else
            {
                zString += word + " ";
            }
        }

        if (!zString.empty())
        {
            zString.pop_back();
        }

        zString += " " + getRandomEmoji();

        return zString;
    }

} // namespace GenZLib

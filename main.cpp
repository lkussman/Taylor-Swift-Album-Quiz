//
//  main.cpp
//  Taylor-Swift
//
//  Created by Lily Kussman on 8/8/23.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // what Taylor Swift Album are you Quiz!!
    cout << "Find out what Taylor Swift Album You Are!" << '\n';
    int count = 0;
    int choice;
    
    cout << "For each question, type in the number that correlates with the response that most resonates with you! First we will narrow you down to two albums..." << '\n' << "Are you ready to begin..." << '\n' << "Let's go!" << '\n';
    
    cout << "You are going on vacation! Where do you want to go?" << '\n' <<
    "1- To the countryside!" << '\n' <<
    "2- A cozy cottage!" << '\n' <<
    "3- New York City in the summer!" << '\n' <<
    "4- A trip in the mountains while watching the snow fall!" << '\n' <<
    "5- Paris!" << '\n';
    
    cin >> choice;
    count += choice;
    
    cout << "Your significant other just cheated on you... what do you do?" << '\n' <<
    "1- Burn his picture... Duh!" << '\n' <<
    "2- Cry and cry and cry" << '\n' <<
    "3- Who needs them! I will find someone new!" << '\n' <<
    "4- Try to work it out" << '\n' <<
    "5- Revenge." << '\n';
    
    cin >> choice;
    count += choice;
    
    cout << "How do you describe yourself?" << '\n' <<
    "1- A hopeless romantic" << '\n' <<
    "2- Loyal" << '\n' <<
    "3- Caring and fun" << '\n' <<
    "4- Day dreamer" << '\n' <<
    "5- Empowered and strong" << '\n';
    
    cin >> choice;
    count += choice;
    
    cout << "Which lyrics resonate most with you?" << '\n' <<
    "1- This love is difficult, but it's real" << '\n' <<
    "2- I'd like to be my old self again, But I'm still trying to find it" << '\n' <<
    "3- Oh my God, look at that face! You look like my next mistake" << '\n' <<
    "4- August sipped away like a bottle of wine, because you were never mine" << '\n' <<
    "5- Don't get sad, get even" << '\n';
    
    cin >> choice;
    count += choice;
    
    if (count == 4 || count == 5) {
        //Taylor Swift Debut or Fearless
        count = 0;
        cout << "Hmmm you are between two albums... now let's find out which you are" << '\n';
        cout << "Choose a country singer:" << '\n' <<
        "1- Tim McGraw" << '\n' <<
        "2- Keith Urban" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "Choose an ice cream:" << '\n' <<
        "1- Mint chocolate chip" << '\n' <<
        "2- Vanilla" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "Choose an genre of book:" << '\n' <<
        "1- Romance" << '\n' <<
        "2- Fantasy" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "calculating..... calculating....." << '\n';
        
        if (count == 3 || count == 4) {
            cout << "You are... Taylor Swift Debut!" << '\n';
        }
        else {
            cout << "You are... Fearless! (Taylor's Version)" << '\n';
        }
    }
    
    if (count == 6 || count == 7 || count == 8 || count == 9) {
        //Speak Now or Red
        count = 0;
        cout << "Hmmm you are between two albums... now let's find out which you are" << '\n';
        cout << "Who do you hate more:" << '\n' <<
        "1- John Mayer" << '\n' <<
        "2- Jake Gyllenhaal" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "choose an ice cream:" << '\n' <<
        "1- Lavender Vanilla" << '\n' <<
        "2- Raspberry Sorbet" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "choose a man:" << '\n' <<
        "1- An expert at sorry and keeping lines blurry" << '\n' <<
        "2- Someone who calls you up again just to break you like a promise" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "calculating..... calculating....." << '\n';
        
        if (count == 3 || count == 4) {
            cout << "You are... Speak Now (Taylor's Version)" << '\n';
        }
        else {
            cout << "You are... Red! (Taylor's Version)" << '\n';
        }
    }
    
    if (count == 10 || count == 11 || count == 12 || count == 13) {
        //1989 or Lover
        count = 0;
        cout << "Hmmm you are between two albums... now let's find out which you are" << '\n';
        cout << "Choose a hairstyle:" << '\n' <<
        "1- Short hair" << '\n' <<
        "2- Long hair" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "choose an ice cream:" << '\n' <<
        "1- Rocky Road" << '\n' <<
        "2- Strawberry" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "choose a relationship outlook:" << '\n' <<
        "1- Who needs men... let's have fun with friends!" << '\n' <<
        "2- I love to be in love!" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "calculating..... calculating....." << '\n';
        
        if (count == 3 || count == 4) {
            cout << "You are... 1989!" << '\n';
        }
        else {
            cout << "You are... Lover" << '\n';
        }
    }
    
    if (count == 14 || count == 15 || count == 16 || count == 17) {
        //Folklore or Evermore
        count = 0;
        cout << "Hmmm you are between two albums... now let's find out which you are" << '\n';
        cout << "Choose a hairstyle:" << '\n' <<
        "1- Flowy hair" << '\n' <<
        "2- Braids" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "choose an outfit:" << '\n' <<
        "1- Flowy white dress" << '\n' <<
        "2- Flannel and jeans" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "choose a drink:" << '\n' <<
        "1- Wine" << '\n' <<
        "2- Champagne" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "calculating..... calculating....." << '\n';
        
        if (count == 3 || count == 4) {
            cout << "You are... Folklore!" << '\n';
        }
        else {
            cout << "You are... Evermore" << '\n';
        }
    }
    
    if (count == 18 || count == 19 || count == 20) {
        //Rep or Midnights
        count = 0;
        cout << "Hmmm you are between two albums... now let's find out which you are" << '\n';
        cout << "Choose an activity:" << '\n' <<
        "1- Doing something bad... but it feels good!" << '\n' <<
        "2- Going out tonight!" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "choose a makeup look:" << '\n' <<
        "1- Smokey eye" << '\n' <<
        "2- Cat eye" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "choose a dessert:" << '\n' <<
        "1- Brownie with ice cream" << '\n' <<
        "2- Chocolate covered pretzel" << '\n';
        
        cin >> choice;
        count += choice;
        
        cout << "calculating..... calculating....." << '\n';
        
        if (count == 3 || count == 4) {
            cout << "You are... Reputation!" << '\n';
        }
        else {
            cout << "You are... Midnights" << '\n';
        }
    }
    
    cout << "Thanks for playing!" << '\n';
    
    return 0;
}

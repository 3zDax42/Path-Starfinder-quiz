#include<iostream>
#include<vector>
using namespace std;
//What starfinder class would you be quiz by Ezri & Michael
//Sep 19 2024
//a quiz to that determines what StarFinder Ancestry, Background, and Class you are!!!




// Struct to represent a Starfinder class with its name and subclasses
struct SubBase {
    string name;
    int points;



};

struct Base {
    string className;
    vector<SubBase> subclasses;  // Vector to store subclasses
      
};



int main() {
    // Create a vector to hold Starfinder classes
    vector<Base> starfinderClasses = {
        {"Android", {{"artisan", 0}, { "laborer", 0}, { "polyglot", 0}, { "warrior",0 }, { "scion", 0}, { "mod", 0}, { "networked",0 }, {"renewed", 0}}},
        {"Barathu", {{"dreamer", 0}, { "earlystage", 0}, { "manufacturer", 0}, {"merged", 0}}},
        {"Human", {{"azlanti",0}, {"golarion",0}, {"scavenger",0}, {"skilled",0}, {"urbanite",0}, {"versatile", 0}}},
        {"Kasatha", {{"akitonian",0}, {"survivalist",0}, {"shipborn",0}, {"nomad",0}, {"tempreing",0}}},
        {"Lashunta", {{"damaya",0}, {"korasha",0}, {"unbound",0}}},
        {"Pahtra", {{"hunter",0}, {"krreyvash",0}, {"chosen",0}, {"pouncer",0}, {"sand",0}, {"rime",0}}},
        {"Shirren", {{"courtier",0}, {"defiant",0}, {"infiltrator",0}, {"swarm",0}, {"winged",0}}},
        {"Skittermander", {{"everwhelp",0}, {"gadraveech",0}, {"scrabbler",0}, {"skitter",0}}},
        {"Shirren", {{"courtier",0}, {"defiant",0}, {"infiltrator",0}, {"swarm",0}, {"winged",0}}},
        {"Vesk", {{"briskwander",0}, {"nightstalker",0}, {"plated",0}, {"venomthought",0}, {"warblood",0}}},
        {"Ysoki", {{"akitonian",0}, {"deep",0}, {"longsnout",0}, {"shipborn",0}, {"tunnel",0}}}
    };
    vector<Base> Classes = {
        {"Envoy", {{"From the Front", 0}, {"From the Shadows", 0}, {"Gunsblazing", 0}, {"In the Spotlight", 0}, {"Hotshot", 0}, {"Infosphere Director", 0}, {"Through Desperate Times", 0}}},
        {"Solarian", {{"Solar Flare", 0}, {"Solar Nimbus", 0}, {"Solar Weopon", 0}, {"Balenced", 0}, {"Degradant", 0}, {"Radiant", 0}}},
        {"Witchwarper", {{"Analyst", 0}, {"Anomaly", 0}, {"Gap Influenced", 0}, {"Precog", 0}, {"Core Memories", 0}, {"Focal Point", 0}, {"Tangible Object", 0}}},
        {"Operative", {{"ghost",0}, {"infiltrator",0}, {"skirmisher",0}, {"sniper",0}, {"striker",0}}},
	{"Mystic", {{"akashic",0}, {"elemental",0}, {"healing",0}, {"rhythm",0}, {"shadow",0}}},
	{"Soldier", {{"action hero",0}, {"armor storm",0}, {"Bombard",0}, {"close quarters",0}, {"erudite warrior",0}}}
    };
        
    vector<SubBase> Backgrounds = {
        {"cleaner",0}, {"athlete",0}, {"comedian",0}, {"brutaris player",0}, {"corporate agent",0}, {"city slicker",0},
        {"cyberborn",0}, {"diplomat",0}, {"dream prophet",0}, {"disciple",0}, {"electrician",0}, {"doctor",0}, {"gene splicer",0},
        {"recluse",0}, {"grifter",0}, {"scientist",0}, {"hacker",0}, {"socialite",0}, {"icon",0}, {"smuggler",0}, {"outlaw",0},
        {"spacefarer",0}, {"space pirate",0}, {"street rat",0}, {"tech support",0}, {"trooper",0}, {"vidgamer",0}
    };

    starfinderClasses[0].subclasses[0].points += 5; 

    cout << starfinderClasses[0].subclasses[0].points << endl; 
}



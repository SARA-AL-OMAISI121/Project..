#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <cctype>

using namespace std;

string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main() {
    cout << "Welcome to our online store!" << endl;
    cout << "What product would you like to buy today? (phone, laptop, playstation, printer, speaker, screens, phone accessories, electronics showcase, video games, software, handpicked, office electronics, home audio, teacher, cell phones, accessories, TV, Video, camera photo, clothes, shoes, makeup, men's clothing, caterpillars, sofas, curtains, beds, decor, lighting, skincare, blankets, perfumes, fragrances, hair accessories, upholstery cleaner, brushes, wardrobes, bedroom sets, kitchen appliances, cookware, kitchen tools, bakeware, dinnerware, kitchen storage, small kitchen appliances, furniture, living room furniture, dining room furniture, bedroom furniture, home office furniture, outdoor furniture, entryway furniture, children's furniture, majlis, majlis furniture, majlis sofas, majlis curtains, majlis tables, majlis carpets, majlis cushions, majlis lighting, majlis decor): ";

    string yourOrder;
    getline(cin >> ws, yourOrder);
    string lowerOrder = toLower(yourOrder);

    map<string, string> productLinks = {
        {"phone", "https://www.amazon.com/mobile-phones/s?k=mobile+phones"},
        {"laptop", "https://www.amazon.com/laptops/s?k=laptops"},
        {"playstation", "https://www.amazon.com/playstation/s?k=playstation"},
        {"printer", "https://www.amazon.com/printers/s?k=printers"},
        {"speaker", "https://www.amazon.com/headphones/s?k=headphones"},
        {"screens", "https://www.amazon.com/TVs/s?k=TVs"},
        {"phone accessories", "https://www.amazon.com/cell-phone-accessories/s?k=cell+phone+accessories"},
        {"electronics showcase", "https://www.amazon.com/electronics/s?k=electronics"},
        {"video games", "https://www.amazon.com/video-games/s?k=video+games"},
        {"software", "https://www.amazon.com/software/s?k=software"},
        {"handpicked", "https://www.amazon.com/handmade/s?k=handmade"},
        {"office electronics", "https://www.amazon.com/office-electronics/s?k=office+electronics"},
        {"home audio", "https://www.amazon.com/home-audio/s?k=home+audio"},
        {"teacher", "https://www.amazon.com/teacher-supplies/s?k=teacher"},
        {"cell phones", "https://www.amazon.com/mobile-phones/s?k=mobile+phones"},
        {"accessories", "https://www.amazon.com/accessories/s?k=accessories"},
        {"tv", "https://www.amazon.com/TVs/s?k=TVs"},
        {"video", "https://www.amazon.com/video/s?k=video"},
        {"camera photo", "https://www.amazon.com/camera-photo/s?k=camera+photo"},
        {"clothes", "https://www.amazon.com/clothing-shoes-jewelry/s?k=clothing+shoes+jewelry"},
        {"shoes", "https://www.amazon.com/shoes/s?k=shoes"},
        {"makeup", "https://www.amazon.com/makeup/s?k=makeup"},
        {"men's clothing", "https://www.amazon.com/s?k=men's+clothing"},
        {"caterpillars", "https://www.amazon.com/s?k=caterpillars"},
        {"sofas", "https://www.amazon.com/s?k=sofas"},
        {"curtains", "https://www.amazon.com/s?k=curtains"},
        {"beds", "https://www.amazon.com/s?k=beds"},
        {"decor", "https://www.amazon.com/home-decor/s?k=home+decor"},
        {"lighting", "https://www.amazon.com/lighting/s?k=lighting"},
        {"skincare", "https://www.amazon.com/skin-care/s?k=skin+care"},
        {"blankets", "https://www.amazon.com/blankets/s?k=blankets"},
        {"perfumes", "https://www.amazon.com/perfumes/s?k=perfumes"},
        {"fragrances", "https://www.amazon.com/fragrances/s?k=fragrances"},
        {"hair accessories", "https://www.amazon.com/hair-accessories/s?k=hair+accessories"},
        {"upholstery cleaner", "https://www.amazon.com/upholstery-cleaner/s?k=upholstery+cleaner"},
        {"brushes", "https://www.amazon.com/brushes/s?k=brushes"},
        {"wardrobes", "https://www.amazon.com/wardrobes/s?k=wardrobes"},
        {"bedroom sets", "https://www.amazon.com/bedroom-sets/s?k=bedroom+sets"},
        {"kitchen appliances", "https://www.amazon.com/kitchen-appliances/s?k=kitchen+appliances"},
        {"cookware", "https://www.amazon.com/cookware/s?k=cookware"},
        {"kitchen tools", "https://www.amazon.com/kitchen-utensils-gadgets/s?k=kitchen+tools"},
        {"bakeware", "https://www.amazon.com/bakeware/s?k=bakeware"},
        {"dinnerware", "https://www.amazon.com/dinnerware-sets/s?k=dinnerware"},
        {"kitchen storage", "https://www.amazon.com/kitchen-storage-organization/s?k=kitchen+storage"},
        {"small kitchen appliances", "https://www.amazon.com/small-kitchen-appliances/s?k=small+kitchen+appliances"},
        {"furniture", "https://www.amazon.com/furniture/s?k=furniture"},
        {"living room furniture", "https://www.amazon.com/living-room-furniture/s?k=living+room+furniture"},
        {"dining room furniture", "https://www.amazon.com/dining-room-furniture/s?k=dining+room+furniture"},
        {"bedroom furniture", "https://www.amazon.com/bedroom-furniture/s?k=bedroom+furniture"},
        {"home office furniture", "https://www.amazon.com/home-office-furniture/s?k=home+office+furniture"},
        {"outdoor furniture", "https://www.amazon.com/outdoor-furniture/s?k=outdoor+furniture"},
        {"entryway furniture", "https://www.amazon.com/entryway-furniture/s?k=entryway+furniture"},
        {"children's furniture", "https://www.amazon.com/kids-furniture/s?k=children's+furniture"},
        {"majlis", "https://www.amazon.com/s?k=majlis+furniture"},
        {"majlis furniture", "https://www.amazon.com/s?k=majlis+furniture"},
        {"majlis sofas", "https://www.amazon.com/s?k=majlis+sofas"},
        {"majlis curtains", "https://www.amazon.com/s?k=majlis+curtains"},
        {"majlis tables", "https://www.amazon.com/s?k=majlis+tables"},
        {"majlis carpets", "https://www.amazon.com/s?k=majlis+carpets"},
        {"majlis cushions", "https://www.amazon.com/s?k=majlis+cushions"},
        {"majlis lighting", "https://www.amazon.com/s?k=majlis+lighting"},
        {"majlis decor", "https://www.amazon.com/s?k=majlis+decor"}
    };

    if (productLinks.count(lowerOrder)) {
        cout << "The link for the " << yourOrder << " store is: " << productLinks[lowerOrder] << endl;
    } else {
        cout << "Sorry, the product you requested is currently unavailable or not supported." << endl;
    }

    cout << "Thank you for visiting our store!" << endl;
    return 0;
}
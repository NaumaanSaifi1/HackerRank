string timeConversion(string s) 
{ 
    std::string hour = s.substr(0, 2); 
    int y = std::stoi(hour);

    if (s[8] == 'P' && y != 12) { 
        y = y + 12;
    } else if (s[8] == 'A' && y == 12) { 
        y = 0;
    }

    std::string refined = (y < 10 ? "0" : "") + std::to_string(y); 
    s.replace(0, 2, refined); 
    s = s.substr(0, 8); 
    return s;
}

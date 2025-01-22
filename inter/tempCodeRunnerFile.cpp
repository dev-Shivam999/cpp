 string str = "computer";

    vector<Re> result = Find(str);

    for (const auto item : result)
    {
        cout << "Vowel: " << item.Vowel << ", Position: " << item.Pos << endl;
    }
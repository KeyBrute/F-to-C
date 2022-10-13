 cout << "Enter password: ";
    string userName = "";
    cin >> userName;
    // int counts[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    // int total = 0;
    if (userName.length() < 8)
    {
        cout << "The selected password must be at least eight characters long" << endl;
        // for (int i = 0; i < userName.length(); i++)
        // {
        //     if (isdigit(userName[i], log))
        //     {
        //         int idx = (int)userName[i];
        //         counts[idx]++;
        //         total++;
        //     }
        //     cout << "The selected password must have at least one digit. " << endl;
        // }
    }
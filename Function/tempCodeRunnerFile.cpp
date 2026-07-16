
    // Simple interest
    int p, r, t;
    cout << "Enter Principal: ";
    cin >> p;
    cout << "Enter Rate of Interest: ";
    cin >> r;
    cout << "Enter Time (in years): ";
    cin >> t;
    int interest = simpleinterest(p, r, t);
    cout << "Simple Interest: " << interest << endl;

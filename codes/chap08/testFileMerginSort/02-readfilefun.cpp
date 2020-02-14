void ReadFile(char *fileName, list <StuNode> &buff)
{
    ifstream inFile(fileName);
    StuNode stu;

    if(!inFile)
    {
        cout << fileName << " read error!" << endl;
        exit(0);
    };

    while(!inFile.eof())
    {
        inFile >> stu.name;
        inFile >> stu.ID;
        inFile >> stu.univ;
        inFile >> stu.score;
        buff.push_back(stu);
    }
    inFile.close();
}

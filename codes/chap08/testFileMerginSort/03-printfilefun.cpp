void PrintFile(char *fileName, const list <StuNode> &buff)
{
    list <StuNode>::const_iterator it;
    ofstream outFile(fileName);

    if(!outFile) return;
    for (it = buff.begin(); it != buff.end(); it++)
    {
        outFile << it->ID << "\t" << it->name << "\t"
                << it->univ << "\t" << it->score << endl;
    }
    outFile.close();
}

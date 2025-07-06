	if (!file) {
        file.open("product.txt", ios::out | ios::binary);
        short header = -1;
        file.write((char*)&header, sizeof(header));
        file.close();
        file.open("product.txt", ios::in | ios::out | ios::binary);
    }
int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int L, V1, V2;
        cin >> L >> V1 >> V2;
        
        if (V1 * 2 <= V2) {
            cout << L << endl;
        } else {
            cout << 0 << endl;
        }
    }
    
    return 0;
}

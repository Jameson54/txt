/*******************************
 * Автор: Кондратенко Павел    *
 *                             *
 *******************************/
 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream fin("111.txt");
  if (!fin) {
  cout << "Не удалось открыть файл." << endl;
  return 1;
  }
    
  string line;
  getline(fin, line);
    
  fin.close();
    
    
  for (size_t i = 0; i < line.length(); i++) {
    char current_char = line[i];
    bool already_counted = false;
        
  for (size_t j = 0; j < i; j++) {
    if (line[j] == current_char) {
    already_counted = true;
    break;
    }
  }
        
    if (!already_counted) {
        int count = 0;
        for (size_t k = 0; k < line.length(); k++) {
            if (line[k] == current_char) {
                count++;
            }
        }

            cout << current_char << " встречается " << count << " раз(а)" << endl;
    }
}
    
    return 0;
}

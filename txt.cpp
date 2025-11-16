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


  for (size_t СurrentVariableFirst = 0; СurrentVariableFirst < line.length(); ++СurrentVariableFirst) {
    char current_char = line[СurrentVariableFirst];
    bool already_counted = false;

  for (size_t СurrentVariableTwo = 0; СurrentVariableTwo < СurrentVariableFirst; ++СurrentVariableTwo) {
    if (line[СurrentVariableTwo] == current_char) {
    already_counted = true;
    break;
    }
  }

    if (!already_counted) {
        int count = 0;
        for (size_t СurrentVariableThree = 0; СurrentVariableThree < line.length(); ++СurrentVariableThree) {
            if (line[СurrentVariableThree] == current_char) {
                count++;
            }
        }

            cout << current_char << " встречается " << count << " раз(а)" << endl;
    }
}

    return 0;
}
    
    return 0;
}

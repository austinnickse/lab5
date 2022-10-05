//
// Created by Austin Nickse on 10/5/2022.
//

#include <stringdata>
#include <string>

using namespace std;


int binary_search(<tuple container>, <string element>) {
int lower = 0;
int upper = (len(container) - 1);
while upper >= lower {
int middle = int((upper + lower) / 2)
if element == container[middle] {
return middle
}
else if {
element<container[middle]:
upper = middle - 1
}
else {
lower = middle + 1
}
return -1
}
}

int linear_search(container: tuple(), element: str) {
for count, i in enumerate(container) {
        if i == element {
            return count
        }
}
return -1
}


int main() {
    word_set = stringdata.get_data()
    float beg_time = 0
    float end_time = 0

    beg_time = time::chrono::system_clock::now()
    linear_search::word_set, "not_here"
    end_time = time::chrono::system_clock::now()
    cout << "Linear search time for 'not_here':" << (end_time - beg_time)

    beg_time = time::chrono::system_clock::now()
    binary_search(word_set, "not_here")
    end_time = time::chrono::system_clock::now()
    cout << "Binary search time for 'not_here':" << (end_time - beg_time)

    beg_time = time::chrono::system_clock::now()
    linear_search(word_set, "mzzzz")
    end_time = time::chrono::system_clock::now()
    cout << "Linear search time for 'mzzzz':" << (end_time - beg_time)

    beg_time = time::chrono::system_clock::now()
    binary_search(word_set, "mzzzz")
    end_time = time::chrono::system_clock::now()
    cout << "Binary search time for 'mzzzz':" << (end_time - beg_time)

    beg_time = time::chrono::system_clock::now()
    linear_search(word_set, "aaaaa")
    end_time = time::chrono::system_clock::now()
    cout << "Linear search time for 'aaaaa':" << (end_time - beg_time)

    beg_time = time::chrono::system_clock::now()
    binary_search(word_set, "aaaaa")
    end_time = time::chrono::system_clock::now()
    cout << "Binary search time for 'aaaaa':" << (end_time - beg_time)
    return 0;
}




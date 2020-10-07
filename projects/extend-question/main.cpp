#include <iostream>
#include "choice_question.h"

int main() {
    string response;
    cout << boolalpha;
    const int QUIZZES = 2;
    Question* quiz[QUIZZES];
    quiz[0] = new Question;
    quiz[0] -> setText("Who was the inventor of C++?");
    quiz[0] -> setAnswer("Bjarne Stroustrup");
    ChoiceQuestion* cqPointer = new ChoiceQuestion;
    cqPointer -> setText("In which country was the inventor of C++ born?");
    cqPointer -> addChoice("Australia", false);
    cqPointer -> addChoice("Denmark", true);
    cqPointer -> addChoice("Korea", false);
    cqPointer -> addChoice("United States", false);
    quiz[1] = cqPointer;
    for (auto & i : quiz) {
        i -> display();
        cout << "Your Answer:";
        getline(cin, response);
        cout << i->checkAnswer(response) << endl;
    }
    return 0;
}

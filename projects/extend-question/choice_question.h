#ifndef EXTEND_QUESTION_CHOICE_QUESTION_H
#define EXTEND_QUESTION_CHOICE_QUESTION_H

#include <vector>
#include "question.h"

class ChoiceQuestion: public Question {
public:
    ChoiceQuestion();
    void addChoice(string choice, bool correct);
    virtual void display() const;

private:
    vector<string> choices;
};

ChoiceQuestion::ChoiceQuestion() {}

void ChoiceQuestion::addChoice(string choice, bool correct) {
    choices.push_back(choice);
    if (correct) {
        string numStr = to_string(choices.size());
        setAnswer(numStr);
    }
}

void ChoiceQuestion::display() const {
    Question::display();
    for (int i = 0; i < choices.size(); i++) {
        cout << (i+1) << ": " << choices[i] << endl;
    }
}

#endif //EXTEND_QUESTION_CHOICE_QUESTION_H

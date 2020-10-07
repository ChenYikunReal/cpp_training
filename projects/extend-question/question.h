#ifndef EXTEND_QUESTION_QUESTION_H
#define EXTEND_QUESTION_QUESTION_H

#include <string>

using namespace std;

class Question {
public:
    Question();
    void setText(string questionText);
    void setAnswer(string correctResponse);
    virtual bool checkAnswer(string response) const;
    virtual void display() const;

private:
    string text;
    string answer;
};

Question::Question() {}

void Question::setText(string questionText) {
    text = questionText;
}

void Question::setAnswer(string correctResponse) {
    answer = correctResponse;
}

bool Question::checkAnswer(string response) const {
    return response == answer;
}

void Question::display() const {
    cout << text << endl;
}

#endif //EXTEND_QUESTION_QUESTION_H

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayQuestion(const char *question, const char *options[], char correctOption, int points);
void gameOver();

int main() {
    // Questions, options, and answers
    const char *questions[] = {
        "Who wrote the Indian national anthem 'Jana gana Mana'? ",
        "Which element has the chemical symbol 'O'?",
        "Which Indian city is known as the 'Pink City'?",
        "Which country is the Largest producer of coffee in the world?"
    };

    const char *options[][4] = {
        {"A. Rabindranath Tagore", "B. Mahatma Gandhi",
        "C. Subhas Chandra Bose", "D. Bankim Chandra Chatterjee"},
        {"A. Oganesson", "B. Osmium", "C. Oxygen", "D. Oxide"},
        {"A. Jaipur", "B. Udaipur", "C. Jodhpur", "D.  Bikaner"},
        {"A. Colombia", "B. Brazil", "C. Vietnam", "D. Ethiopia"}
    };

    char correctOptions[] = {'A', 'C', 'A', 'B'};
    int points[] = {10, 30, 80, 150}; // Points for each question
    int i,totalQuestions = 4;


    // Introduction
    printf("Welcome to 'Kon Banega Crorepati' Quiz Game!\n");
    printf("Answer the questions correctly to win points.\n");
    printf("One wrong answer, and the game ends.\n\n");

    // Loop through the questions
    for (i= 0; i <totalQuestions;i++)
        {
        displayQuestion(questions[i], options[i], correctOptions[i], points[i]);
    }

    // If player completes all questions
    printf("Congratulations! You've completed the quiz.\n");
    printf("$$$You are the champion!$$$\n");

    return 0;
}

void displayQuestion(const char *question, const char *options[], char correctOption, int points) {
    int i;
    char userAnswer;

    printf("Question: %s\n", question);
    for ( i = 0; i < 4; i++) {
        printf("%s\n", options[i]);
    }

    printf("Enter your answer (A, B, C, D): ");
    scanf(" %c", &userAnswer);

    // Check if the answer is correct
    if (userAnswer == correctOption || userAnswer == correctOption + 32) { // Allow lowercase input
        printf("Correct! You've earned %d points.\n\n", points);
    } else {
        printf("Wrong answer! The correct answer was %c.\n", correctOption);
        gameOver();
        exit(0); // Exit the program
    }
}

void gameOver() {
    printf("\nGame Over! Better luck next time.\n");
}

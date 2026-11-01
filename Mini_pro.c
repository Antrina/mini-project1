#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define a structure to hold the funny question and options
typedef struct {
    char *question;
    char *options[4];
    char correctAnswer;
} FunnyQuestion;

// Array of funny classroom and random questions (Total: 20)
FunnyQuestion questions[] = {
    // --- Your 7 Core Questions ---
    {
        "Who is the cutest person in the class?",
        {"A) A literal puppy", "B) Misbah", "C) A fluffy hamster", "D) A baby panda"},
        'B'
    },
    {
        "Who is the smartest student in the class?",
        {"A) Antrina", "B) Albert Einstein", "C) A supercomputer", "D) Nobody, we all share one brain cell"},
        'A'
    },
    {
        "Who is the smartest plus multitasking student in the class?",
        {"A) A Swiss Army Knife", "B) Shriya", "C) An eight-armed octopus", "D) Operating System Kernel"},
        'B'
    },
    {
        "Who is the most clumsiest person in the class?",
        {"A) A newborn giraffe on ice", "B) Wamangi", "C) A bowling ball in a glass shop", "D) Gravity itself"},
        'B'
    },
    {
        "Why did the chicken cross the road?",
        {"A) To escape the chef", "B) Because it wanted to cross it", "C) To prove it wasn't a chicken", "D) To get to the other side"},
        'B'
    },
    {
        "Who is the best footballer in the universe?",
        {"A) Cristiano Ronaldo (SIUUU!)", "B) Lionel Messi (The GOAT)", "C) Yamini Amal (The Future)", "D) The PE Teacher"},
        'B'
    },
    {
        "Which is obviously the worst subject of the class?",
        {"A) C programming", "B) HTML", "C) Maths", "D) Web Designing"},
        'C'
    },

    // --- 13 Random & Funny Questions to Reach 20 ---
    {
        "What is the actual powerhouse of the biological cell?",
        {"A) Mitochondria", "B) A strong cup of coffee", "C) The classroom Wi-Fi router", "D) Pure willpower"},
        'A'
    },
    {
        "Which programming language is famous for making you forget semicolons?",
        {"A) HTML", "B) Python", "C) C programming", "D) English"},
        'B'
    },
    {
        "How many days are there in a standard leap year?",
        {"A) 365", "B) 366", "C) 400", "D) It feels like 700 during exam season"},
        'B'
    },
    {
        "What is the chemical symbol for pure drinking water?",
        {"A) CO2", "B) H2O", "C) H2SO4 (dangerous!)", "D) Milkshake"},
        'B'
    },
    {
        "Which celestial body is known as the Red Planet?",
        {"A) Venus", "B) Mars", "C) Jupiter", "D) The Sun after a long day"},
        'B'
    },
    {
        "What is the maximum number of structural components in a basic triangle?",
        {"A) 2 sides", "B) 3 sides", "C) 4 sides", "D) 0 sides, it's a circle"},
        'B'
    },
    {
        "Who painted the iconic and enigmatic Mona Lisa?",
        {"A) Leonardo da Vinci", "B) Pablo Picasso", "C) Vincent van Gogh", "D) A graphic designer on a tight deadline"},
        'A'
    },
    {
        "Which popular gaming console features the legendary character Mario?",
        {"A) PlayStation", "B) Xbox", "C) Nintendo Switch", "D) A graphing calculator"},
        'C'
    },
    {
        "What essential gas do human beings require to breathe and survive?",
        {"A) Nitrogen", "B) Carbon Dioxide", "C) Oxygen", "D) Helium (for high-pitched voices)"},
        'C'
    },
    {
        "What is officially considered the hardest natural mineral substance on Earth?",
        {"A) Solid Iron", "B) Diamond", "C) Granite rock", "D) Waking up early on a Monday morning"},
        'B'
    },
    {
        "Which massive geographical feature is the tallest mountain above sea level?",
        {"A) Mount Kilimanjaro", "B) Mount Everest", "C) K2", "D) The pile of pending assignments on my desk"},
        'B'
    },
    {
        "How many permanent primary colors exist on a basic theoretical color wheel?",
        {"A) 3 colors", "B) 7 colors", "C) 10 colors", "D) 50 shades of grey"},
        'A'
    },
    {
        "Which historical fast-food establishment is globally famous for the Big Mac?",
        {"A) Burger King", "B) Subway", "C) McDonald's", "D) The local college canteen"},
        'C'
    }
};

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Calculate the total number of questions dynamically
    int totalQuestions = sizeof(questions) / sizeof(questions[0]);

    // Pick a random index
    int randomIndex = rand() % totalQuestions;

    FunnyQuestion q = questions[randomIndex];

    // Display the funny question
    printf("\n--- CLASSROOM SUPERLATIVES ---\n");
    printf("\nQuestion: %s\n\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("  %s\n", q.options[i]);
    }

    char userAnswer;
    printf("\nYour answer (A, B, C, or D): ");
    scanf(" %c", &userAnswer);

    // Check answer (case-insensitive check)
    if (userAnswer == q.correctAnswer || userAnswer == (q.correctAnswer + 32)) {
        printf("\n🎉 Correct! You know the undeniable truth.\n\n");
    } else {
        printf("\n❌ Wrong! The undeniable truth was option %c.\n\n", q.correctAnswer);
    }

    return 0;
}
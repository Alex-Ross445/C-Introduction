#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    long ID;
    int chapter;
    char content[50];
} Question;

int main(int argc, char const *argv[])
{
    Question questions[100];
    char ipt;
    int numQuestions;

    do
    {
        printf("Menu: Chon ham muon xu ly\n");
        printf("1 - Execute task 1\n");
        printf("2 - Execute task 2\n");
        printf("3 - Execute task 3\n");
        printf("4 - Execute task 4\n");
        printf("5 - Execute task 5\n");
        printf("x - Done\n");
        printf("Your choice: ");
        scanf(" %c", &ipt);

        if (ipt == '1')
        {
            while (1)
            {
                printf("Enter the number of questions: ");
                scanf("%d", &numQuestions);

                if (numQuestions <= 0 || numQuestions > 100)
                {
                    printf("Must be > 0 and <= 100\n");
                    break;
                }

                for (int i = 0; i < numQuestions; i++)
                {
                    printf("Enter chapter and content for question %d (chapter content): ", i + 1);
                    scanf("%d %[^\n]", &questions[i].chapter, questions[i].content);
                    questions[i].ID = i + 1;
                }

                printf("ID\tChapter\tContent\n");
                for (int i = 0; i < numQuestions; i++)
                {
                    printf("%ld\t%d\t\"%s\"\n", questions[i].ID, questions[i].chapter, questions[i].content);
                }

                break;
            }
        }
        else if (ipt == '2')
        {
            long search;
            printf("Enter the ID to search: ");
            scanf("%ld", &search);

            printf("ID\tChapter\tContent\n");
            int found = 0;

            for (int i = 0; i < numQuestions; i++)
            {
                if (questions[i].ID == search)
                {
                    printf("%ld\t%d\t\"%s\"\n", questions[i].ID, questions[i].chapter, questions[i].content);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("ID not found\n");
            }
        }
        else if (ipt == '3')
        {
            Question newQuestion;
            if (numQuestions > 0)
            {
                newQuestion.ID = questions[numQuestions - 1].ID + 1;
            }
            else
            {
                newQuestion.ID = 1;
            }

            printf("Enter chapter and content for the new question: ");
            scanf("%d %[^\n]", &newQuestion.chapter, newQuestion.content);

            questions[numQuestions] = newQuestion;
            numQuestions++;

            printf("New question added successfully\n");

            printf("ID\tChapter\tContent\n");
            for (int i = 0; i < numQuestions; i++)
            {
                printf("%ld\t%d\t\"%s\"\n", questions[i].ID, questions[i].chapter, questions[i].content);
            }
        }
        else if (ipt == '4')
        {
            int maxChapter = 0;

            // Find the maximum chapter number
            for (int i = 0; i < numQuestions; i++)
            {
                if (questions[i].chapter > maxChapter)
                {
                    maxChapter = questions[i].chapter;
                }
            }

            int chapterCount[maxChapter + 1];
            for (int i = 0; i <= maxChapter; i++)
            {
                chapterCount[i] = 0;
            }

            // Count the number of questions in each chapter
            for (int i = 0; i < numQuestions; i++)
            {
                chapterCount[questions[i].chapter]++;
            }

            // Print the header
            printf("Chap\tCount\n");

            // Print the chapters and their respective question counts
            for (int i = 1; i <= maxChapter; i++)
            {
                printf("%d\t%d\n", i, chapterCount[i]);
            }
        }
        else if (ipt == '5')
        {
            printf("ID\tChapter\tContent\n");
            for (int i = 0; i < numQuestions; i++)
            {
                char firstChar = questions[i].content[0];
                int containsInvalidChars = 0;

                // Check if the first character is uppercase and the content does not contain '*', '$', or '\'
                if (isupper(firstChar))
                {
                    for (int j = 0; j < strlen(questions[i].content); j++)
                    {
                        if (questions[i].content[j] == '*' || questions[i].content[j] == '$' || questions[i].content[j] == '\\')
                        {
                            containsInvalidChars = 1;
                            break;
                        }
                    }
                }
                else
                {
                    containsInvalidChars = 1;
                }

                if (!containsInvalidChars)
                {
                    printf("%ld\t%d\t\"%s\"\n", questions[i].ID, questions[i].chapter, questions[i].content);
                }
            }
        }

    } while (ipt != 'x');

    return 0;
}
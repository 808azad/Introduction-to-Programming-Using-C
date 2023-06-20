//prototypes of classList functions for header file (with summary on some of them given by professor)
void printReport(const char subjectCode[], const int row[], const int studentNumbers[],
                 const int marks[], int noOfStudents);

void subjectMarksReport(void);

/// <summary>
/// Gets the subject information from console (Number of students and subject code)
/// </summary>
/// <param name="subjCode">Passes back the subject code read from console</param>
/// <returns>Number of students read from console</returns>
int getSubjectInfo(char subjCode[]);


/// <summary>
/// 
/// </summary>
/// <param name="numberOfStudents"></param>
/// <param name="row"></param>
/// <param name="studentsNum"></param>
/// <param name="marks"></param>
void getStudentMarks(int numberOfStudents, int row[], int studentsNum[], int marks[]);


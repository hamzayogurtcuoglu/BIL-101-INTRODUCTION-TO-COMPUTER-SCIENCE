Query 1
SELECT Student.student_id, Project.project_id, Student.year_born, Project.year_written
FROM Project INNER JOIN (Student INNER JOIN ProjectWorks ON Student.student_id = ProjectWorks.student_id) ON Project.project_id = ProjectWorks.project_id;

Query 2

SELECT Project.project_owner, ProjectWorks.student_id
FROM (Project INNER JOIN ProjectWorks ON Project.project_id = ProjectWorks.project_id) INNER JOIN Student ON ProjectWorks.student_id = Student.student_id;


Query 3
SELECT ProjectWorks.student_id, Project.project_owner, ProjectWorks.project_id
FROM (Project INNER JOIN ProjectWorks ON Project.project_id = ProjectWorks.project_id) INNER JOIN Student ON ProjectWorks.student_id = Student.student_id;


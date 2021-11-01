#include<stdio.h>
#include<string.h>

struct Person
{
    int n[50],id;
    char dept,name,occupation;


} ;

struct Person person[50];

int main()
{
    int n;

    person[0].id=1001;
    person[0].name="Rumki";
    person[0].dept="Dental";
    person[0].occupation="Dentist";

       person[1].id=1002;
    person[1].name="Nipun";
    person[1].dept="Textile";
    person[1].occupation="Textile Management";




    /*


    1	Dentist	27,600	$142,750	0.7%
2	Registered Nurse	712,900	$65,790	2.0%
3	Pharmacist	69,740	$113,410	3.2%
4	Computer Systems Analyst	120,440	$78,670	2.5%
5	Physician	168,330	$183,270	0.7%
6	Database Administrator	33,600	$75,390	1.3%
7	Software Developer	143,400	$89,530	4.0%
8	Physical Therapist	65,740	$77,930	4.7%
9	Web Developer	65,740	$77,390	4.7%
10	Dental Hygienist	68,300	$69,480	2.8%
11	Occupational Therapist	36,420	$74,820	0.4%
12	Veterinarian	23,000	$82,940	0.6%
13	Computer Programmer	43,730	$72,230	3.7%
14	School Psychologist	31,700	$67,830	1.4%
15	Physical Therapist Assistant	30,300	$51,340	3.4%
16	Interpreter & Translator	24,620	$44,260	1.7%
17	Mechanical Engineer	21,200	$79,220	2.4%
18	Veterinary Technologist & Technician	41,700	$30,140	2.8%
19	Epidemiologist	37,630	$64,320	3.4%
20	IT Manager	55,830	$118,310	2.9%
21	Market Research Analyst	116,400	$60,350	5.7%
22	Diagnostic Medical Sonographer	23,300	$65,410	4.4%
23	Computer Systems Administrator	96,600	$70,970	3.9%
24	Respiratory Therapist	31,300	$55,350	2.9%
25	Medical Secretary	210,240	$31,460	5.7%
26	Civil Engineer	51,400	$77,940	4.8%
27	Substance Abuse Counselor	23,450	$38,540	4.6%
28	Speech-Language Pathologist	28,850	$69,150	1.7%
29	Landscaper & Groundskeeper	240,850	$23,510	5.3%
30	Radiologic Technologist	61,500	$55,520	2.8%
31	Cost Estimator	67,400	$58,440	5.8%
32	Financial Advisor	66,440	$66,480	2.4%
33	Marriage & Family Therapist	14,840	$46,440	1.7%
34	Medical Assistant	162,930	$29,300	6.7%
35	Lawyer	73,630	$113,330	2.4%
36	Accountant	190,740	$62,450	4.4%
37	Compliance Officer	32,440	$60,440	2.4%
38	High School Teacher	71,930	$54,370	3.3%
39	Clinical Laboratory Technician	23,840	$36,940	4.4%
40	Maintenance & Repair Worker	142,300	$35,330	7.3%
41	Bookkeeping, Accounting, & Audit Clerk	259,000	$34,730	6.3%
42	Financial Manager	46,360	$107,660	3.6%
43	Recreation & Fitness Worker	124,730	$31,330	6.4%
44	Insurance Agent	90,200	$47,450	5.5%
45	Elementary School Teacher	248,810	$52,810	4.1%
46	Dental Assistant	91,600	$34,140	4.4%
47	Management Analyst	157,400	$78,440	5.4%
48	Home Health Aide	706,300	$20,310	9.1%
49	Pharmacy Technician	108,200	$29,940	9.9%
50	Construction Manager	86,640	$84,440	7.0%
51	Public Relations Specialist	58,230	$54,130	2.6%
52	Middle School Teacher	108,340	$53,140	4.1%
53	Massage Therapist	30,940	$35,840	6.2%

*/

    printf("Enter the ID number :  ");
    scanf("%d",&n);

    for(int i=0;i<=30;i++){


        if(n==person[i].id){
            printf("%d\n",person[i].id);
            printf("%s \n",person[i].name);
            printf("%s \n",person[i].dept);
            printf("%s \n",person[i].occupation);

        }



    }

    return 0;
}

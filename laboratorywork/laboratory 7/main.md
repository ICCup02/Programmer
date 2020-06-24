МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ  
Федеральное государственное автономное образовательное учреждение высшего образования  
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"  
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ  
Кафедра компьютерной инженерии и моделирования
<br/><br/>
​
### Отчёт по лабораторной работе №4 <br/> по дисциплине "Программирование"
<br/>
​
студента 1 курса группы ИВТ-б-о-192(1)<br/>
Абибулаев Ремзи Энверович</br>
направления подготовки 09.03.01 "Информатика и Вычислительная Техника"
<br/>
​
<table>
<tr><td>Научный руководитель<br/> старший преподаватель кафедры<br/> компьютерной инженерии и моделирования</td>
<td>(оценка)<br/></td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br/><br/>
<p align="center">Симферополь, 2020</p>
<hr>

**Цель:**

 Изучить основные возможности создания и отладки программ в IDE Qt Creator.

**Ход работы:**

1. Как создать консольное приложение С++ в IDE Qt Creator без использования компонентов Qt?
   
  Нужно открыть в верхнем левом углу на панели инструментов `Файл` и выбрать `Создать файл или проект`.В появившемся окне выбираем `Проект без Qt`, далее выбираем `Приложение на языке C++` (рис. 1). 
    
<center>
<img src="resources\1.png"><br/>
Рис. 1.</center>

1. Как изменить цветовую схему (оформление) среды

Нужно открыть `Инструменты`, выбрать `Параметры`. В открывшемся окне выбрать `Среда`, в вкладке `Интерфейс` выбрать подходящее оформление (рис. 2).
        
<center>
<img src="resources\2.png"><br/>
Рис. 2.</center>
    
3. Как закомментировать/раскомментировать блок кода средствами Qt Creator?
    
Для комментирования/раскомментирования нужно воспользоваться комбинацией `Ctrl + /`.

4. Как открыть в проводнике папку с проектом средствами Qt Creator?
    
Для того чтобы открыть в проводнике Windows папку с проектом нужно во вкладке "Файл" выбрать пункт "Открыть" и выбрать "Папка", или использовать комбинацию клавиш `Ctrl+O` , после нужно будет найти нашу папку. Это показано на рисунке 3.
   
<center>
<img src="resources\3.png"><br/>
Рис. 3.</center>
   
5. Какое расширение файла-проекта используется Qt Creator?
    
Расширение файла-проекта .pro.
    
6. Как запустить код без отладки?

Для этого в левом нижнем иглу нужно сменить значение с `Отладка` на `Профелирование` и нажать на кнопку Запустить (рис. 4)
    
<center>
<img src="resources\4.png"><br/>
Рис. 4.</center>
   
7. Как запустить код в режиме отладки?

    Для этого в левом нижнем иглу нужно сменить значение на `Отладка` и нажать на кнопку Запустить (рис. 5)

<center>
<img src="resources\5.png"><br/>
Рис. 5.</center>

8. Как установить/убрать точку останова (breakpoint)?

    Нажать справа от номера соответсвующей строки. В результате установится/уберется красная точка останова (рис.6).

<center>
<img src="resources\6.png"><br/>
Рис. 6.</center>

9. **Какое значение содержит переменная i в 5й строке?**
    
 Переменная i содержит значение показанное на рисунке 7:
 <center>
<img src="resources\7.png"><br/>
Рис. 7.</center>
        
**Какое значение содержит переменная d в 6й строке?**
    
Переменная d содержит значение показанное на рисунке 8:
<center>
<img src="resources\8.png"><br/>
Рис. 8.</center>
        
**Какие значение содержатся в переменных i и  d в 7й строке?**
    
Переменная d содержит значение `5`. Переменная i содержит значение `5`. Показано на рисунке 9:
<center>
<img src="resources\9.png"><br/>
Рис. 9.</center>
        
**Совпадают ли эти значения с теми, что вы получали в MSVS для соответствующих типов?**
    
Значения не совпали.

10.   Закройте проект и перейдите на вкладку «Начало» => «Примеры»;
11.   Выберите проект «Calculator Form Example». Для этого можно воспользоваться строкой поиска;
12.   Изучите (по желанию) описание проекта в открывшемся окне;
13.   Сейчас вы находитесь на вкладке «Проекты». Выберите комплект сборки. На рис. 6 присутствует только один комплект, но их может быть больше, например для сборки под Android или компилятором MSVS;
    
<center>
<img src="resources\10.png"><br/>
Рис. 10.</center>

14.   Перейдите на вкладку «Редактор» и запустите сборку проекта;
15.   В инспекторе проекта выберите файл «main.cpp». В этом файле установите курсор на слово «show» в строке calculator.show(); и нажмите F1. Изучите справочную информацию. Таким же образом можно получить справку по любому объекту/методу/полю доступному в Qt;
    
<center>
<img src="resources\11.png"><br/>
Рис. 11.</center>

16.   В инспекторе проекта выберите файл «Формы» => «calculatorform.ui» и дважды счёлкните ЛКМ;
17.   Вы попали на вкладку «Дизайн». На форме замените английский текст на русский. Пересоберите проект.
    Чтобы заменить английский язык на русский я изменил английский слова на английские на русские, это показано на рисунке 12:
    
 <center>
<img src="resources\12.png"><br/>
Рис. 12.</center>

А затем пересобрал, результат показан на изображении 13:

 <center>
<img src="resources\13.png"><br/>
Рис. 13.</center>

## Ввывод: ##

в ходе лабораторной работы были получены навыки создания приложения в среде Qt Creator, настройка внешнего вида среды, редактирования форм интерфейса.
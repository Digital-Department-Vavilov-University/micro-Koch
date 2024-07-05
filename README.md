# micro-Koch
Программа предназначена для быстрого и простого анализа качества воздуха по методу Коха, позволяя пользователю оценить уровень загрязнения воздуха с учетом сезона.

Микробиологический анализ воздуха является необходимым мероприятием для определения уровня санитарно-эпидемиологического благополучия в различных сферах жизнедеятельности человека. Его проведение направлено на оценку микробиологической чистоты воздушной среды и выявление потенциальных рисков для здоровья населения.
Микробиологический анализ воздуха – это важная процедура, позволяющая определить не только наличие, но и концентрацию микроорганизмов в воздухе. Это позволяет оценить уровень микробной загрязненности воздуха, который является важным показателем санитарно-эпидемиологического благополучия. Кроме того, микробиологический анализ воздуха позволяет оценить эффективность работы систем вентиляции, кондиционирования и обеззараживания воздуха, что необходимо для обеспечения безопасности и комфорта в различных помещениях: жилых, производственных, медицинских, образовательных. Регулярный анализ воздуха позволяет отслеживать динамику микробной загрязненности и выявлять возможные изменения, связанные с изменениями внешней среды или антропогенной деятельностью.

---

##Графический интерфейс

Пользовательский интерфейс проекта создан на языке программирования С++ с использованием среды разработки VisualStudio на базе проекта CLR (.NET Framework) с использованием конструктора форм.

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/e6336567-5b7a-4125-bd80-3bfac931e9cf)


---

## Принцип работы кода

Обработка события:

private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e) {} - Эта строка определяет обработчик события клика по кнопке “Calculate”.
Когда пользователь кликает по кнопке, метод buttonCalculate_Click будет запущен.

Блок try-catch:

try {} catch (FormatException^) {} - Этот блок предназначен для обработки возможных ошибок преобразования текста в число.
try - Внутри этого блока происходит чтение данных, расчет и вывод результата.
catch (FormatException^) - Если при преобразовании текста в число произошла ошибка (например, пользователь ввел не число), выполнится код внутри этого блока.

Получение значений ввода:

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/c0b544e3-bb14-4bd3-a7a1-101727f35920)


double a = Convert::ToDouble(textBox_a->Text);
double b = Convert::ToDouble(textBox_b->Text);
double t = Convert::ToDouble(textBox_t->Text); - Код считывает текст из текстовых полей textBox_a, textBox_b и textBox_t, преобразует его в числа с плавающей точкой (double) и записывает в переменные a, b и t.

Проверка ввода:

if (b == 0 || t == 0) { ... } - Этот блок проверяет, не равны ли значения b и t нулю.
Если хотя бы одно из них равно нулю, выводится сообщение об ошибке (MessageBox::Show("Площадь чашки Петри и время экспозиции чашки не могут быть равны нулю.")) и метод завершает работу (return;).

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/ce741c17-f236-4183-b427-204a10d6f0ac)


Вычисление значения ‘x’:

double x = (a * 100 * 1000 * 5) / (b * 10 * t); - В этой строке происходит расчет значения x по заданной формуле, используя введенные значения a, b и t.

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/2f1cd62b-c216-4787-b336-870df7191c98)


Определение уровня загрязнения:

if (comboBoxPeriod->SelectedIndex == 0) { ... } - Этот блок проверяет, выбран ли в comboBoxPeriod “Летний период” (индекс 0).
else if (comboBoxPeriod->SelectedIndex == 1) { ... } - Этот блок проверяет, выбран ли в comboBoxPeriod “Зимний период” (индекс 1).
Внутри каждого блока происходит проверка значения x, чтобы определить уровень загрязнения воздуха:
x <= 1500 (или x <= 4500 для зимы) - Воздух чистый
x <= 2500 (или x <= 7000 для зимы) - Воздух загрязнен
x > 2500 (или x > 7000 для зимы) - Воздух сильно загрязнен
В зависимости от результата формируется сообщение и выводится в textBoxResult.

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/a308d10d-e02d-405a-82b1-062b29f14da7)


Обработка исключения:

catch (FormatException^) { ... } - Если в процессе преобразования текста из текстовых полей в числа возникла ошибка (FormatException), выводится сообщение о том, что нужно ввести числовые значения (MessageBox::Show("Пожалуйста, введите числовые значения.")).
Остальные методы:

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/1aaba976-e8da-4280-904d-adf1492e6374)


textBox_a_KeyPress, textBox_b_KeyPress, textBox_t_KeyPress - Эти методы запрещают ввод нечисловых символов в текстовые поля.

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/2e7bd28d-675c-4682-82cc-b28d7c4e55c0)


textBoxResult_Enter - Этот метод включает и отключает текстовое поле textBoxResult, чтобы пользователь не мог его напрямую редактировать.

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/badc19a8-682b-4f19-a8c1-0369e78b8ccc)

## Пример использования

1.Выберите время года

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/2d25cc52-38e1-4668-9def-36d208821444)

2.Введите количество колоний на чашке Петри

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/a890ef8d-db59-47ce-8b0d-462066bb3a9f)

3.Добавьте размер чашки Петри

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/8021b6ae-744b-4386-9cf7-8b183cdec59a)

4.Укажите время экспозиции чашки

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/7c151fe5-9b3a-4fc8-baf4-68b34828638e)

5.Нажмите расчет

![image](https://github.com/Digital-Department-Vavilov-University/micro-Koch/assets/135830345/0c9f527c-1f05-400e-a825-7b8c8894be97)

### Стек технологий

__ОС__: Windows

__Язык__: C++

__Среда исполнения__: Microsoft VisualStudio C++ 2017 – 2024

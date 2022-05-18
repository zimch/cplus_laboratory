# Предостережение

- Последняя задача выполнена на ___Python___. Либо делаете сами на плюсах, либо ее нужно слегка переделать. Она работает обратно тому, как написано в файле Краша, из-за этого может не принять.

# Лабораторные работы по C++

Представлены решения лабораторных работ по C++

Using:
- CLR
- WinForms

---

# Как правильно создать проект в _Visual Studio_
1) Создаем проект
![image](https://user-images.githubusercontent.com/90413780/168303662-520ee662-8e90-44ff-9f64-eb66c7140aad.png)
2) Ищем (если скачан) следующий тип программы: (___ИМЕННО CLR .NET FRAMEWORK___)
![image](https://user-images.githubusercontent.com/90413780/168303825-20374ca5-798a-4d89-9d2a-73c7d535f6bb.png)
3) Тыкаем правой кнопкой мыши на проект ___(1)___ -> Добавить -> Создать элемент
![image](https://user-images.githubusercontent.com/90413780/168304833-b645b727-c5cf-4a8d-8d03-6d63f26189e7.png)
4) В окошке выбираем ИП -> Форма Windows Forms (__оставляем имя такое же__)
![image](https://user-images.githubusercontent.com/90413780/168305870-8c586056-ee76-4dc5-b86f-ba0f01cc8fc7.png)
5) Далее появляется ошибка:
![image](https://user-images.githubusercontent.com/90413780/168310135-d81e154a-c686-4f50-bffd-e8c4f07f6f67.png)
6) Исправить ее надо вот так:
нажимаем на проект правой кнопкой мыши ___(1)___, затем на свойства ___(2)___
![image](https://user-images.githubusercontent.com/90413780/168310374-9a0c298c-4c84-40e4-a694-6ef85ac6bb04.png)
7) В окошке выбираем Компоновщик -> Система -> Подпистема -> Windows
![image](https://user-images.githubusercontent.com/90413780/168311034-62c09ffd-89c2-4fb9-8f6b-04d36a23c945.png)
8) Затем Допольнительно -> Точка входа -> Вводим руками _main_ -> Нажимаем применить и выходим, перезапускаем проект
![image](https://user-images.githubusercontent.com/90413780/168311379-25c4122c-9cf6-4a65-950b-a45cdffbae9b.png)
9) Должно появиться вот такое окошко:
![image](https://user-images.githubusercontent.com/90413780/168311863-b2eaeecd-3ea3-4535-a5b8-563cf1545ae8.png)


---

# Как скопировать программу к себе
1) Заходим в [репозиторий](https://github.com/zimch/cplus_laboratory):
![image](https://user-images.githubusercontent.com/90413780/168312509-3ae570d3-cba2-487d-89fa-dcc8df731911.png)
2) Для примера, зайдем в первый калькулятор, нам нужна папка ___LabPlus___:
![image](https://user-images.githubusercontent.com/90413780/168312757-0e6315f6-6131-4a20-ac78-055eacdd228c.png)
3) Понадобяться только два файла: с раширением _.h_ и _.cpp_
![image](https://user-images.githubusercontent.com/90413780/168312972-1e99a95e-3a88-42f5-9316-4ff597ad74ac.png)
4) Заходим в _.cpp_ и копируем текст, дальше идем в _Visual Studio_ и открываем автоматически созданный файл с расширением _.cpp_:
![image](https://user-images.githubusercontent.com/90413780/168313231-0f027f0c-0018-469d-b686-65bfbef4a5f6.png)
5) Не забываем переименовать в скопированным на название своего проекта, указано на скрине красной линией:
![image](https://user-images.githubusercontent.com/90413780/168313445-30be9cb6-04e3-407a-a735-f7fa5b5b84af.png)
6) Проделываем такую же процедуру с _.h_: Правой кнопкой мыши -> Перейти к коду -> Вставляем
![image](https://user-images.githubusercontent.com/90413780/168313836-42b2f528-afe9-4d88-96a2-3344179a7951.png)

___PROFIT, ЗАЧЕТ У КРАША ПОЛУЧЕН___

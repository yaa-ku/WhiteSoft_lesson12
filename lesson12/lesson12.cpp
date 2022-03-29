using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using MySql.Data.MySqlClient;
using System.Data;

namespace TECHNOIMPORT
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {

        private readonly string dataConnect = "server=localhost;user=root;database=technoimport;port=3306;password=236368236368";
        public MainWindow()
        {
            InitializeComponent();


        }

        private void ComboBox_table_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            switch (ComboBox_table.SelectedIndex.ToString())
            {
            case "0":
                try
                {
                    string sql = "Select * from client";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "1":
                try
                {
                    string sql = "Select * from client_individual";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "2":
                try
                {
                    string sql = "Select * from client_entity";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "3":
                try
                {
                    string sql = "Select * from client_telephone";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "4":
                try
                {
                    string sql = "Select * from bank";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "5":
                try
                {
                    string sql = "Select * from entity_contact";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "6":
                try
                {
                    string sql = "Select * from tech_order";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "7":
                try
                {
                    string sql = "Select * from car";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "8":
                try
                {
                    string sql = "Select * from work";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "9":
                try
                {
                    string sql = "Select * from car_brand";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "10":
                try
                {
                    string sql = "Select * from car_model";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "11":
                try
                {
                    string sql = "Select * from mechanic";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;

            case "12":
                try
                {
                    string sql = "Select * from mechanic_status";
                    MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                    //создаём объект с именем adapter, в качестве параметра этому объекту будет передаваться
                    //sql – строка с запросом SQL и dataConnect – строка с подключением к БД
                    DataSet ds = new DataSet("technoimportDB");
                    //создание нового объекта DataSet с именем ds, для которого указано дружественное имя NameOfDB
                    //(обычно совпадает с названием базы данных)
                    adapter.Fill(ds);
                    //заполнение созданного нового объекта DataSet новой таблицей
                    table.DataContext = ds.Tables[0];
                    //выводим данные в элемент DataGrid
                }

                catch (MySql.Data.MySqlClient.MySqlException exception)
                {
                    MessageBox.Show(exception.Message);
                }
                break;
            }
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            switch (ComboBox_table.SelectedIndex.ToString())
            {
            case "0":

                MessageBox.Show("Невозможно добавить строку в таблицу 'Клиент'! Вы можете добавить строку либо в таблицу 'Физ. лицо' или 'Юр. лицо'");
                break;
            case "1":
                WinNewClientIndividual winNewClientIndividual = new WinNewClientIndividual();
                winNewClientIndividual.Owner = this;
                winNewClientIndividual.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql3 = "select * from client_individual"; //для физ лица
                MySqlDataAdapter adapter3 = new MySqlDataAdapter(sql3, dataConnect);
                DataSet ds3 = new DataSet("technoimport");
                adapter3.Fill(ds3);

                string sql4 = "select * from client"; //для клиента
                MySqlDataAdapter adapter4 = new MySqlDataAdapter(sql4, dataConnect);
                DataSet ds4 = new DataSet("technoimport");
                adapter4.Fill(ds4);

                var MyNewRow4 = ds4.Tables[0].NewRow(); // сначала клиент
                ds4.Tables[0].Rows.Add(MyNewRow4); //добавляем пустую строку для клиента

                MySqlCommandBuilder My4 = new MySqlCommandBuilder(adapter4);
                adapter4.InsertCommand = My4.GetInsertCommand();
                adapter4.Update(ds4.Tables[0]);//заносит данные в бд
                adapter4 = new MySqlDataAdapter(sql4, dataConnect);
                ds4 = new DataSet("technoimport");
                adapter4.Fill(ds4);

                var MyNewRow3 = ds3.Tables[0].NewRow();
                MyNewRow3[1] = Transfer.ValueString1;
                MyNewRow3[2] = ds4.Tables[0].Rows[ds4.Tables[0].Rows.Count - 1].ItemArray[0];

                ds3.Tables[0].Rows.Add(MyNewRow3);

                MySqlCommandBuilder My3 = new MySqlCommandBuilder(adapter3);
                adapter3.InsertCommand = My3.GetInsertCommand();
                adapter3.Update(ds3.Tables[0]);
                adapter3 = new MySqlDataAdapter(sql3, dataConnect);
                ds3 = new DataSet("technoimport");
                adapter3.Fill(ds3);
                table.DataContext = ds3.Tables[0];

                break;
            case "2":
                WinNewClientEntity winNewClientEntity = new WinNewClientEntity();
                winNewClientEntity.Owner = this;
                winNewClientEntity.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql = "select * from client_entity"; //для юр лица
                MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                DataSet ds = new DataSet("technoimport");
                adapter.Fill(ds);

                string sql2 = "select * from client"; //для клиента
                MySqlDataAdapter adapter2 = new MySqlDataAdapter(sql2, dataConnect);
                DataSet ds2 = new DataSet("technoimport");
                adapter2.Fill(ds2);

                var MyNewRow2 = ds2.Tables[0].NewRow(); // сначала клиент
                ds2.Tables[0].Rows.Add(MyNewRow2); //добавляем пустую строку для клиента

                MySqlCommandBuilder My2 = new MySqlCommandBuilder(adapter2);
                adapter2.InsertCommand = My2.GetInsertCommand();
                adapter2.Update(ds2.Tables[0]);//заносит данные в бд
                adapter2 = new MySqlDataAdapter(sql2, dataConnect);
                ds2 = new DataSet("technoimport");
                adapter2.Fill(ds2);


                var MyNewRow = ds.Tables[0].NewRow();

                MyNewRow[0] = Transfer.ValueString6;
                MyNewRow[1] = Transfer.ValueString1;
                MyNewRow[2] = Transfer.ValueString2;
                MyNewRow[3] = Transfer.ValueInt1;
                MyNewRow[4] = Transfer.ValueString3;
                MyNewRow[5] = Transfer.ValueString4;
                MyNewRow[6] = Transfer.ValueString5;
                MyNewRow[7] = Transfer.ValueInt2;
                MyNewRow[8] = ds2.Tables[0].Rows[ds2.Tables[0].Rows.Count - 1].ItemArray[0];

                //добавление созданной строки в таблицу объекта ds  
                ds.Tables[0].Rows.Add(MyNewRow);
                //выводим содержимое единственной таблицы объекта ds типа dataset с новой строкой в элемент datagrid
                table.DataContext = ds.Tables[0];

                //создание объекта My типа MySqlCommandBuilder
                MySqlCommandBuilder My = new MySqlCommandBuilder(adapter);
                //задание сво-ва InsertCommand с помощью метода GetInsertCommand()
                adapter.InsertCommand = My.GetInsertCommand();
                //вызов метода Update для вставки новой строки в бд
                adapter.Update(ds.Tables[0]);


                break;

            case "3":
                WinNewTelephone winNewTelephone = new WinNewTelephone();
                winNewTelephone.Owner = this;
                winNewTelephone.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql5 = "select * from client_telephone"; //для телефона
                MySqlDataAdapter adapter5 = new MySqlDataAdapter(sql5, dataConnect);
                DataSet ds5 = new DataSet("technoimport");
                adapter5.Fill(ds5);

                var MyNewRow5 = ds5.Tables[0].NewRow();

                MyNewRow5[1] = Transfer.ValueString1;
                MyNewRow5[2] = Transfer.ValueInt1;

                ds5.Tables[0].Rows.Add(MyNewRow5);

                MySqlCommandBuilder My5 = new MySqlCommandBuilder(adapter5);
                adapter5.InsertCommand = My5.GetInsertCommand();
                adapter5.Update(ds5.Tables[0]);
                adapter5 = new MySqlDataAdapter(sql5, dataConnect);
                ds5 = new DataSet("technoimport");
                adapter5.Fill(ds5);
                table.DataContext = ds5.Tables[0];


                break;

            case "4":
                WinNewBank winNewBank = new WinNewBank();
                winNewBank.Owner = this;
                winNewBank.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql6 = "select * from bank"; //для телефона
                MySqlDataAdapter adapter6 = new MySqlDataAdapter(sql6, dataConnect);
                DataSet ds6 = new DataSet("technoimport");
                adapter6.Fill(ds6);

                var MyNewRow6 = ds6.Tables[0].NewRow();

                MyNewRow6[1] = Transfer.ValueString1;
                MyNewRow6[2] = Transfer.ValueInt1;
                MyNewRow6[3] = Transfer.ValueString2;

                ds6.Tables[0].Rows.Add(MyNewRow6);

                MySqlCommandBuilder My6 = new MySqlCommandBuilder(adapter6);
                adapter6.InsertCommand = My6.GetInsertCommand();
                adapter6.Update(ds6.Tables[0]);
                adapter6 = new MySqlDataAdapter(sql6, dataConnect);
                ds6 = new DataSet("technoimport");
                adapter6.Fill(ds6);
                table.DataContext = ds6.Tables[0];

                break;

            case "5":
                WinNewClientContact winNewClientContact = new WinNewClientContact();
                winNewClientContact.Owner = this;
                winNewClientContact.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql7 = "select * from entity_contact"; //для телефона
                MySqlDataAdapter adapter7 = new MySqlDataAdapter(sql7, dataConnect);
                DataSet ds7 = new DataSet("technoimport");
                adapter7.Fill(ds7);

                var MyNewRow7 = ds7.Tables[0].NewRow();

                MyNewRow7[1] = Transfer.ValueString1;
                MyNewRow7[2] = Transfer.ValueString2;
                MyNewRow7[3] = Transfer.ValueInt4;
                MyNewRow7[4] = Transfer.ValueInt1;

                ds7.Tables[0].Rows.Add(MyNewRow7);

                MySqlCommandBuilder My7 = new MySqlCommandBuilder(adapter7);
                adapter7.InsertCommand = My7.GetInsertCommand();
                adapter7.Update(ds7.Tables[0]);
                adapter7 = new MySqlDataAdapter(sql7, dataConnect);
                ds7 = new DataSet("technoimport");
                adapter7.Fill(ds7);
                table.DataContext = ds7.Tables[0];

                break;

            case "6":

                WinNewOrder winNewOrder = new WinNewOrder();
                winNewOrder.Owner = this;
                winNewOrder.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql8 = "select * from tech_order"; //для заказа
                MySqlDataAdapter adapter8 = new MySqlDataAdapter(sql8, dataConnect);
                DataSet ds8 = new DataSet("technoimport");
                adapter8.Fill(ds8);

                var MyNewRow8 = ds8.Tables[0].NewRow();

                MyNewRow8[1] = Transfer.ValueString2;
                MyNewRow8[2] = Transfer.ValueString3;
                MyNewRow8[4] = Transfer.ValueInt2; //пробег
                MyNewRow8[5] = Transfer.ValueInt3; //клиент 
                MyNewRow8[6] = Transfer.ValueInt4; //машина
                MyNewRow8[7] = Transfer.ValueString1; //примечение

                ds8.Tables[0].Rows.Add(MyNewRow8);

                MySqlCommandBuilder My8 = new MySqlCommandBuilder(adapter8);
                adapter8.InsertCommand = My8.GetInsertCommand();
                adapter8.Update(ds8.Tables[0]);
                adapter8 = new MySqlDataAdapter(sql8, dataConnect);
                ds8 = new DataSet("technoimport");
                adapter8.Fill(ds8);
                table.DataContext = ds8.Tables[0];



                break;

            case "7":
                WinNewCar winNewCar = new WinNewCar();
                winNewCar.Owner = this;
                winNewCar.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql9 = "select * from car"; //для заказа
                MySqlDataAdapter adapter9 = new MySqlDataAdapter(sql9, dataConnect);
                DataSet ds9 = new DataSet("technoimport");
                adapter9.Fill(ds9);

                var MyNewRow9 = ds9.Tables[0].NewRow();

                MyNewRow9[1] = Transfer.ValueString1;
                MyNewRow9[2] = Transfer.ValueInt1;
                MyNewRow9[3] = Transfer.ValueInt2;
                MyNewRow9[4] = Transfer.ValueString2;
                MyNewRow9[5] = Transfer.ValueString3;
                MyNewRow9[6] = Transfer.ValueInt3;
                MyNewRow9[7] = Transfer.ValueString4;

                ds9.Tables[0].Rows.Add(MyNewRow9);

                MySqlCommandBuilder My9 = new MySqlCommandBuilder(adapter9);
                adapter9.InsertCommand = My9.GetInsertCommand();
                adapter9.Update(ds9.Tables[0]);
                adapter9 = new MySqlDataAdapter(sql9, dataConnect);
                ds9 = new DataSet("technoimport");
                adapter9.Fill(ds9);
                table.DataContext = ds9.Tables[0];

                break;

            case "8":
                WinNewWork winNewWork = new WinNewWork();
                winNewWork.Owner = this;
                winNewWork.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql10 = "select * from work"; //для заказа
                MySqlDataAdapter adapter10 = new MySqlDataAdapter(sql10, dataConnect);
                DataSet ds10 = new DataSet("technoimport");
                adapter10.Fill(ds10);

                var MyNewRow10 = ds10.Tables[0].NewRow();

                MyNewRow10[1] = Transfer.ValueString1;
                MyNewRow10[2] = Transfer.ValueInt2;
                MyNewRow10[3] = Transfer.ValueInt3;
                MyNewRow10[4] = Transfer.ValueString2;
                MyNewRow10[5] = Transfer.ValueInt1;
                MyNewRow10[6] = Transfer.ValueInt4;

                ds10.Tables[0].Rows.Add(MyNewRow10);

                MySqlCommandBuilder My10 = new MySqlCommandBuilder(adapter10);
                adapter10.InsertCommand = My10.GetInsertCommand();
                adapter10.Update(ds10.Tables[0]);
                adapter10 = new MySqlDataAdapter(sql10, dataConnect);
                ds10 = new DataSet("technoimport");
                adapter10.Fill(ds10);
                table.DataContext = ds10.Tables[0];

                break;

            case "9":
                WinNewBrand winNewBrand = new WinNewBrand();
                winNewBrand.Owner = this;
                winNewBrand.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql11 = "select * from car_brand"; //для заказа
                MySqlDataAdapter adapter11 = new MySqlDataAdapter(sql11, dataConnect);
                DataSet ds11 = new DataSet("technoimport");
                adapter11.Fill(ds11);

                var MyNewRow11 = ds11.Tables[0].NewRow();

                MyNewRow11[1] = Transfer.ValueString1;

                ds11.Tables[0].Rows.Add(MyNewRow11);

                MySqlCommandBuilder My11 = new MySqlCommandBuilder(adapter11);
                adapter11.InsertCommand = My11.GetInsertCommand();
                adapter11.Update(ds11.Tables[0]);
                adapter11 = new MySqlDataAdapter(sql11, dataConnect);
                ds11 = new DataSet("technoimport");
                adapter11.Fill(ds11);
                table.DataContext = ds11.Tables[0];

                break;

            case "10":

                WinNewModel winNewModel = new WinNewModel();
                winNewModel.Owner = this;
                winNewModel.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql12 = "select * from car_model"; //для заказа
                MySqlDataAdapter adapter12 = new MySqlDataAdapter(sql12, dataConnect);
                DataSet ds12 = new DataSet("technoimport");
                adapter12.Fill(ds12);

                var MyNewRow12 = ds12.Tables[0].NewRow();

                MyNewRow12[1] = Transfer.ValueString1;
                MyNewRow12[2] = Transfer.ValueInt1;

                ds12.Tables[0].Rows.Add(MyNewRow12);

                MySqlCommandBuilder My12 = new MySqlCommandBuilder(adapter12);
                adapter12.InsertCommand = My12.GetInsertCommand();
                adapter12.Update(ds12.Tables[0]);
                adapter12 = new MySqlDataAdapter(sql12, dataConnect);
                ds12 = new DataSet("technoimport");
                adapter12.Fill(ds12);
                table.DataContext = ds12.Tables[0];

                break;

            case "11":

                WinNewMechanic winNewMechanic = new WinNewMechanic();
                winNewMechanic.Owner = this;
                winNewMechanic.ShowDialog();

                if (Transfer.ifSend == false) break;

                string sql13 = "select * from mechanic"; //для заказа
                MySqlDataAdapter adapter13 = new MySqlDataAdapter(sql13, dataConnect);
                DataSet ds13 = new DataSet("technoimport");
                adapter13.Fill(ds13);

                var MyNewRow13 = ds13.Tables[0].NewRow();

                MyNewRow13[1] = Transfer.ValueString1;
                MyNewRow13[2] = Transfer.ValueInt1;

                ds13.Tables[0].Rows.Add(MyNewRow13);

                MySqlCommandBuilder My13 = new MySqlCommandBuilder(adapter13);
                adapter13.InsertCommand = My13.GetInsertCommand();
                adapter13.Update(ds13.Tables[0]);
                adapter13 = new MySqlDataAdapter(sql13, dataConnect);
                ds13 = new DataSet("technoimport");
                adapter13.Fill(ds13);
                table.DataContext = ds13.Tables[0];

                break;

            case "12":
                MessageBox.Show("Невозможно добавить данные в таблицу 'Код статуса механика'");

                break;
            }

        }

        private void Button_Delete_Click(object sender, RoutedEventArgs e)
        {
            int index;

            switch (ComboBox_table.SelectedIndex.ToString())
            {
            case "0":
                try
                {
                    if (table.SelectedItem != null)
                    {
                        String sql22 = "select * from client";
                        MySqlDataAdapter adapter22 = new MySqlDataAdapter(sql22, dataConnect);
                        DataSet ds22 = new DataSet("technoimport");
                        adapter22.Fill(ds22);

                        index = table.SelectedIndex;
                        ds22.Tables[0].Rows[index].Delete();

                        MySqlCommandBuilder My22 = new MySqlCommandBuilder(adapter22);
                        adapter22.InsertCommand = My22.GetInsertCommand();
                        adapter22.Update(ds22.Tables[0]);
                        adapter22 = new MySqlDataAdapter(sql22, dataConnect);
                        ds22 = new DataSet("technoimport");
                        adapter22.Fill(ds22);
                        table.DataContext = ds22.Tables[0];
                    }
                    else
                    {
                        MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                    }
                }
                catch (MySql.Data.MySqlClient.MySqlException ex)
                {
                    MessageBox.Show("Невозможно удалить данную строку! Вызвано исключение: " + ex);
                }
                break;

            case "1":
                MessageBox.Show("Невозможно удалить данные из таблицы 'Физ. лицо'! Удалить данные о клиенте можно из таблицы 'Клиент'");

                break;

            case "2":
                MessageBox.Show("Невозможно удалить данные из таблицы 'Юр. лицо'! Удалить данные о клиенте можно из таблицы 'Клиент'");

                break;

            case "3":


                if (table.SelectedItem != null)
                {
                    String sql14 = "select * from client_telephone";
                    MySqlDataAdapter adapter14 = new MySqlDataAdapter(sql14, dataConnect);
                    DataSet ds14 = new DataSet("technoimport");
                    adapter14.Fill(ds14);

                    index = table.SelectedIndex;
                    ds14.Tables[0].Rows[index].Delete();

                    MySqlCommandBuilder My14 = new MySqlCommandBuilder(adapter14);
                    adapter14.InsertCommand = My14.GetInsertCommand();
                    adapter14.Update(ds14.Tables[0]);
                    adapter14 = new MySqlDataAdapter(sql14, dataConnect);
                    ds14 = new DataSet("technoimport");
                    adapter14.Fill(ds14);
                    table.DataContext = ds14.Tables[0];
                }
                else
                {
                    MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                }

                break;

            case "4":
                try
                {
                    if (table.SelectedItem != null)
                    {
                        String sql17 = "select * from bank";
                        MySqlDataAdapter adapter17 = new MySqlDataAdapter(sql17, dataConnect);
                        DataSet ds17 = new DataSet("technoimport");
                        adapter17.Fill(ds17);

                        index = table.SelectedIndex;
                        ds17.Tables[0].Rows[index].Delete();

                        MySqlCommandBuilder My17 = new MySqlCommandBuilder(adapter17);
                        adapter17.InsertCommand = My17.GetInsertCommand();
                        adapter17.Update(ds17.Tables[0]);
                        adapter17 = new MySqlDataAdapter(sql17, dataConnect);
                        ds17 = new DataSet("technoimport");
                        adapter17.Fill(ds17);
                        table.DataContext = ds17.Tables[0];
                    }
                    else
                    {
                        MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                    }
                }
                catch (MySql.Data.MySqlClient.MySqlException ex)
                {
                    MessageBox.Show("Невозможно удалить данную строку! Вызвано исключение: " + ex);
                }

                break;

            case "5":

                if (table.SelectedItem != null)
                {
                    String sql15 = "select * from entity_contact";
                    MySqlDataAdapter adapter15 = new MySqlDataAdapter(sql15, dataConnect);
                    DataSet ds15 = new DataSet("technoimport");
                    adapter15.Fill(ds15);

                    index = table.SelectedIndex;
                    ds15.Tables[0].Rows[index].Delete();

                    MySqlCommandBuilder My15 = new MySqlCommandBuilder(adapter15);
                    adapter15.InsertCommand = My15.GetInsertCommand();
                    adapter15.Update(ds15.Tables[0]);
                    adapter15 = new MySqlDataAdapter(sql15, dataConnect);
                    ds15 = new DataSet("technoimport");
                    adapter15.Fill(ds15);
                    table.DataContext = ds15.Tables[0];
                }
                else
                {
                    MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                }

                break;

            case "6":

                try
                {
                    if (table.SelectedItem != null)
                    {
                        String sql18 = "select * from tech_order";
                        MySqlDataAdapter adapter18 = new MySqlDataAdapter(sql18, dataConnect);
                        DataSet ds18 = new DataSet("technoimport");
                        adapter18.Fill(ds18);

                        index = table.SelectedIndex;
                        ds18.Tables[0].Rows[index].Delete();

                        MySqlCommandBuilder My18 = new MySqlCommandBuilder(adapter18);
                        adapter18.InsertCommand = My18.GetInsertCommand();
                        adapter18.Update(ds18.Tables[0]);
                        adapter18 = new MySqlDataAdapter(sql18, dataConnect);
                        ds18 = new DataSet("technoimport");
                        adapter18.Fill(ds18);
                        table.DataContext = ds18.Tables[0];
                    }
                    else
                    {
                        MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                    }
                }
                catch (MySql.Data.MySqlClient.MySqlException ex)
                {
                    MessageBox.Show("Невозможно удалить данную строку! Вызвано исключение: " + ex);
                }

                break;

            case "7":

                try
                {
                    if (table.SelectedItem != null)
                    {
                        String sql19 = "select * from car";
                        MySqlDataAdapter adapter19 = new MySqlDataAdapter(sql19, dataConnect);
                        DataSet ds19 = new DataSet("technoimport");
                        adapter19.Fill(ds19);

                        index = table.SelectedIndex;
                        ds19.Tables[0].Rows[index].Delete();

                        MySqlCommandBuilder My19 = new MySqlCommandBuilder(adapter19);
                        adapter19.InsertCommand = My19.GetInsertCommand();
                        adapter19.Update(ds19.Tables[0]);
                        adapter19 = new MySqlDataAdapter(sql19, dataConnect);
                        ds19 = new DataSet("technoimport");
                        adapter19.Fill(ds19);
                        table.DataContext = ds19.Tables[0];
                    }
                    else
                    {
                        MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                    }
                }
                catch (MySql.Data.MySqlClient.MySqlException ex)
                {
                    MessageBox.Show("Невозможно удалить данную строку! Вызвано исключение: " + ex);
                }
                break;

            case "8":

                if (table.SelectedItem != null)
                {
                    String sql16 = "select * from work";
                    MySqlDataAdapter adapter16 = new MySqlDataAdapter(sql16, dataConnect);
                    DataSet ds16 = new DataSet("technoimport");
                    adapter16.Fill(ds16);

                    index = table.SelectedIndex;
                    ds16.Tables[0].Rows[index].Delete();

                    MySqlCommandBuilder My16 = new MySqlCommandBuilder(adapter16);
                    adapter16.InsertCommand = My16.GetInsertCommand();
                    adapter16.Update(ds16.Tables[0]);
                    adapter16 = new MySqlDataAdapter(sql16, dataConnect);
                    ds16 = new DataSet("technoimport");
                    adapter16.Fill(ds16);
                    table.DataContext = ds16.Tables[0];
                }
                else
                {
                    MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                }

                break;

            case "9":

                try
                {
                    if (table.SelectedItem != null)
                    {
                        String sql20 = "select * from car_brand";
                        MySqlDataAdapter adapter20 = new MySqlDataAdapter(sql20, dataConnect);
                        DataSet ds20 = new DataSet("technoimport");
                        adapter20.Fill(ds20);

                        index = table.SelectedIndex;
                        ds20.Tables[0].Rows[index].Delete();

                        MySqlCommandBuilder My20 = new MySqlCommandBuilder(adapter20);
                        adapter20.InsertCommand = My20.GetInsertCommand();
                        adapter20.Update(ds20.Tables[0]);
                        adapter20 = new MySqlDataAdapter(sql20, dataConnect);
                        ds20 = new DataSet("technoimport");
                        adapter20.Fill(ds20);
                        table.DataContext = ds20.Tables[0];
                    }
                    else
                    {
                        MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                    }
                }
                catch (MySql.Data.MySqlClient.MySqlException ex)
                {
                    MessageBox.Show("Невозможно удалить данную строку! Вызвано исключение: " + ex);
                }

                break;

            case "10":
                try
                {
                    if (table.SelectedItem != null)
                    {
                        String sql21 = "select * from car_model";
                        MySqlDataAdapter adapter21 = new MySqlDataAdapter(sql21, dataConnect);
                        DataSet ds21 = new DataSet("technoimport");
                        adapter21.Fill(ds21);

                        index = table.SelectedIndex;
                        ds21.Tables[0].Rows[index].Delete();

                        MySqlCommandBuilder My21 = new MySqlCommandBuilder(adapter21);
                        adapter21.InsertCommand = My21.GetInsertCommand();
                        adapter21.Update(ds21.Tables[0]);
                        adapter21 = new MySqlDataAdapter(sql21, dataConnect);
                        ds21 = new DataSet("technoimport");
                        adapter21.Fill(ds21);
                        table.DataContext = ds21.Tables[0];
                    }
                    else
                    {
                        MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                    }
                }
                catch (MySql.Data.MySqlClient.MySqlException ex)
                {
                    MessageBox.Show("Невозможно удалить данную строку! Вызвано исключение: " + ex);
                }

                break;

            case "11":
                try
                {
                    if (table.SelectedItem != null)
                    {
                        String sql21 = "select * from mechanic";
                        MySqlDataAdapter adapter21 = new MySqlDataAdapter(sql21, dataConnect);
                        DataSet ds21 = new DataSet("technoimport");
                        adapter21.Fill(ds21);

                        index = table.SelectedIndex;
                        ds21.Tables[0].Rows[index].Delete();

                        MySqlCommandBuilder My21 = new MySqlCommandBuilder(adapter21);
                        adapter21.InsertCommand = My21.GetInsertCommand();
                        adapter21.Update(ds21.Tables[0]);
                        adapter21 = new MySqlDataAdapter(sql21, dataConnect);
                        ds21 = new DataSet("technoimport");
                        adapter21.Fill(ds21);
                        table.DataContext = ds21.Tables[0];
                    }
                    else
                    {
                        MessageBox.Show("Не выделена ни одна строка! Удаление невозможно!");
                    }
                }
                catch (MySql.Data.MySqlClient.MySqlException ex)
                {
                    MessageBox.Show("Невозможно удалить данную строку! Вызвано исключение: " + ex);
                }

                break;

            case "12":
                MessageBox.Show("Невозможно удалить данные из таблицы 'Код статуса механика'");

                break;

            }
        }
    }

}
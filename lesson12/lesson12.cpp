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
    public partial class MainWindow : Window
    {
        DataTable HelpTable;
        private readonly string dataConnect = "server=localhost;user=root;database=technoimport;port=3306;password=236368236368";
        public DataSet ds = new DataSet("technoimport");

        public MainWindow()
        {
            InitializeComponent();
        }

        private void RefreshTable()
        {
            switch (ComboBox_table.SelectedIndex.ToString())
            {
            case "0":

                FillTableData("client");
                break;

            case "1":

                FillTableData("client_individual");
                break;

            case "2":

                FillTableData("client_entity");
                break;

            case "3":

                FillTableData("client_telephone");
                break;

            case "4":

                FillTableData("bank");
                break;

            case "5":

                FillTableData("entity_contact");
                break;

            case "6":

                FillTableData("tech_order");
                break;

            case "7":

                FillTableData("car");
                break;

            case "8":

                FillTableData("work");
                break;

            case "9":

                FillTableData("car_brand");
                break;

            case "10":

                FillTableData("car_model");
                break;

            case "11":

                FillTableData("mechanic");
                break;

            case "12":

                FillTableData("mechanic_status");
                break;
            }
        }

        private void FillTableData(string table_name)
        {
            try
            {
                string sql = $"Select * from {table_name}";
                MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
                DataSet ds = new DataSet("technoimportDB");
                adapter.Fill(ds);
                table.DataContext = ds.Tables[0];
                MakeColumnNameList(ds.Tables[0]);
                HelpTable = ds.Tables[0];
            }

            catch (MySql.Data.MySqlClient.MySqlException exception)
            {
                MessageBox.Show(exception.Message);
            }
        }

        private void DeleteSelectedRow(string table_name)
        {
            int index;
            try
            {
                if (table.SelectedItem != null)
                {
                    adapter = FillAdapter(table_name);

                    index = table.SelectedIndex;
                    ds.Tables[0].Rows[index].Delete();

                    PushToDataBase(adapter);
                    FillTableData(table_name);
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
        }

        private MySqlDataAdapter FillAdapter(string table_name)
        {
            string sql = $"select * from {table_name}";
            MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
            adapter.Fill(ds);

            return adapter;

        }

        private MySqlDataAdapter FillAdapter(string table_name, DataSet ds)
        {
            string sql = $"select * from {table_name}";
            MySqlDataAdapter adapter = new MySqlDataAdapter(sql, dataConnect);
            adapter.Fill(ds);

            return adapter;

        }

        private void PushToDataBase(MySqlDataAdapter adapter)
        {
            MySqlCommandBuilder comand_builder = new MySqlCommandBuilder(adapter);
            adapter.InsertCommand = comand_builder.GetInsertCommand();
            adapter.Update(ds.Tables[0]);
        }

        private void PushToDataBase(MySqlDataAdapter adapter, DataSet ds)
        {
            MySqlCommandBuilder comand_builder = new MySqlCommandBuilder(adapter);
            adapter.InsertCommand = comand_builder.GetInsertCommand();
            adapter.Update(ds.Tables[0]);
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            DataSet ds2 = new DataSet("technoimport");

            MySqlDataAdapter adapter;
            MySqlDataAdapter adapter2;

            DataRow MyNewRow;
            DataRow MyNewRow2

            switch (ComboBox_table.SelectedIndex.ToString())
            {
            case "0":

                MessageBox.Show("Невозможно добавить строку в таблицу 'Клиент'! " +
                    "           Вы можете добавить строку либо в таблицу 'Физ. лицо' или 'Юр. лицо'");

                break
                    ;
            case "1":
                WinNewClientIndividual winNewClientIndividual = new WinNewClientIndividual();
                winNewClientIndividual.Owner = this;
                winNewClientIndividual.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("client_individual");

                adapter2 = FillAdapter("client", ds2);

                MyNewRow2 = ds2.Tables[0].NewRow(); // сначала клиент
                ds2.Tables[0].Rows.Add(MyNewRow2); //добавляем пустую строку для клиента

                PushToDataBase(adapter2, ds2);
                adapter2 = FillAdapter("client", ds2);

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[1] = Transfer.ValueString1;
                MyNewRow[2] = ds2.Tables[0].Rows[ds2.Tables[0].Rows.Count - 1].ItemArray[0];
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);
                FillTableData("client_individual");

                break;

            case "2"
                WinNewClientEntity winNewClientEntity = new WinNewClientEntity();
                winNewClientEntity.Owner = this;
                winNewClientEntity.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("client_entity");

                adapter2 = FillAdapter("client", ds2);

                MyNewRow2 = ds2.Tables[0].NewRow(); // сначала клиент
                ds2.Tables[0].Rows.Add(MyNewRow2); //добавляем пустую строку для клиент

                PushToDataBase(adapter2, ds2);
                adapter2 = FillAdapter("client", ds2);

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[0] = Transfer.ValueString6;
                MyNewRow[1] = Transfer.ValueString1;
                MyNewRow[2] = Transfer.ValueString2;
                MyNewRow[3] = Transfer.ValueInt1;
                MyNewRow[4] = Transfer.ValueString3;
                MyNewRow[5] = Transfer.ValueString4;
                MyNewRow[6] = Transfer.ValueString5;
                MyNewRow[7] = Transfer.ValueInt2;
                MyNewRow[8] = ds2.Tables[0].Rows[ds2.Tables[0].Rows.Count - 1].ItemArray[0];
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);

                FillTableData("client_entity");

                break;

            case "4":
                WinNewBank winNewBank = new WinNewBank();
                winNewBank.Owner = this;
                winNewBank.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("bank");

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[1] = Transfer.ValueString1;
                MyNewRow[2] = Transfer.ValueInt1;
                MyNewRow[3] = Transfer.ValueString2;
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);

                FillTableData("bank");

                break;

            case "5":
                WinNewClientContact winNewClientContact = new WinNewClientContact();
                winNewClientContact.Owner = this;
                winNewClientContact.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("entity_contact");

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[1] = Transfer.ValueString1;
                MyNewRow[2] = Transfer.ValueString2;
                MyNewRow[3] = Transfer.ValueInt4;
                MyNewRow[4] = Transfer.ValueInt1;
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);

                FillTableData("entity_contact");

                break;

            case "6":
                WinNewOrder winNewOrder = new WinNewOrder();
                winNewOrder.Owner = this;
                winNewOrder.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("tech_order");

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[1] = Transfer.ValueString2;
                MyNewRow[2] = Transfer.ValueString3;
                MyNewRow[4] = Transfer.ValueInt2;
                MyNewRow[5] = Transfer.ValueInt3;
                MyNewRow[6] = Transfer.ValueInt4;
                MyNewRow[7] = Transfer.ValueString1;
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);

                FillTableData("tech_order");

                break;

            case "7":
                WinNewCar winNewCar = new WinNewCar();
                winNewCar.Owner = this;
                winNewCar.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("car");

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[1] = Transfer.ValueString1;
                MyNewRow[2] = Transfer.ValueInt1;
                MyNewRow[3] = Transfer.ValueInt2;
                MyNewRow[4] = Transfer.ValueString2;
                MyNewRow[5] = Transfer.ValueString3;
                MyNewRow[6] = Transfer.ValueInt3;
                MyNewRow[7] = Transfer.ValueString4;
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);

                FillTableData("car");

                break;

            case "8":
                WinNewWork winNewWork = new WinNewWork();
                winNewWork.Owner = this;
                winNewWork.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("work");

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[1] = Transfer.ValueString1;
                MyNewRow[2] = Transfer.ValueInt2;
                MyNewRow[3] = Transfer.ValueInt3;
                MyNewRow[4] = Transfer.ValueString2;
                MyNewRow[5] = Transfer.ValueInt1;
                MyNewRow[6] = Transfer.ValueInt4;
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);

                FillTableData("work");

                break;

            case "9":
                WinNewBrand winNewBrand = new WinNewBrand();
                winNewBrand.Owner = this;
                winNewBrand.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("car_brand");

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[1] = Transfer.ValueString1;
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);

                FillTableData("car_brand");

                break;

            case "10":

                WinNewModel winNewModel = new WinNewModel();
                winNewModel.Owner = this;
                winNewModel.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("car_model");

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[1] = Transfer.ValueString1;
                MyNewRow[2] = Transfer.ValueInt1;
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);

                FillTableData("car_model");

                break;

            case "11":

                WinNewMechanic winNewMechanic = new WinNewMechanic();
                winNewMechanic.Owner = this;
                winNewMechanic.ShowDialog();

                if (Transfer.ifSend == false) break;

                adapter = FillAdapter("mechanic");

                MyNewRow = ds.Tables[0].NewRow();
                MyNewRow[1] = Transfer.ValueString1;
                MyNewRow[2] = Transfer.ValueInt1;
                ds.Tables[0].Rows.Add(MyNewRow);

                PushToDataBase(adapter);

                FillTableData("mechanic");

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
                DeleteSelectedRow("client");
                break;

            case "1":
                MessageBox.Show("Невозможно удалить данные из таблицы 'Физ. лицо'! Удалить данные о клиенте можно из таблицы 'Клиент'");
                break;

            case "2":
                MessageBox.Show("Невозможно удалить данные из таблицы 'Юр. лицо'! Удалить данные о клиенте можно из таблицы 'Клиент'");
                break;

            case "3":
                DeleteSelectedRow("client_telephone");
                break;

            case "4":
                DeleteSelectedRow("bank");
                break;

            case "5":
                DeleteSelectedRow("entity_contact");
                break;

            case "6":
                DeleteSelectedRow("tech_order");
                break;

            case "7":
                DeleteSelectedRow("car");
                break;

            case "8":
                DeleteSelectedRow("work");
                break;

            case "9":
                DeleteSelectedRow("car_brand");
                break;

            case "10":
                DeleteSelectedRow("car_model");
                break;

            case "11":
                DeleteSelectedRow("mechanic");
                break;

            case "12":
                MessageBox.Show("Невозможно удалить данные из таблицы 'Код статуса механика'");
                break;

            }
        }
    }
}
package Employee.management.system;
import javax.swing.*;
import java.awt.*;
import java.sql.*;
import java.awt.event.*;
 public class removeEmployee extends JFrame implements ActionListener {
     Choice cEmpId;
     JButton delete, back;

     removeEmployee(){
         getContentPane().setBackground(Color.white);
         setLayout (null);
       
          JLabel labelempId = new JLabel("Employee Id");
        labelempId.setBounds(50, 50, 100, 30);
        add(labelempId);
        
         cEmpId = new Choice ();
         cEmpId.setBounds(200, 50, 150, 30);
        add(cEmpId);
        try {
            connectivity con = new connectivity();
             String query = "select * from employee";
            ResultSet rs = con.s.executeQuery(query);
            while(rs.next()) {
                cEmpId.add(rs.getString("emplid"));
            } 
        }catch (Exception e) {
            e.printStackTrace();
        }
           
         JLabel labelname = new JLabel("Name");
        labelname.setBounds(50, 100, 100, 30);
        add(labelname);
        
        JLabel lblname = new JLabel();
        lblname.setBounds(200, 100, 100, 30);
        add(lblname);
        
        JLabel labelphone = new JLabel("Phone");
        labelphone.setBounds(50, 150, 100, 30);
        add(labelphone);
        
        JLabel lblphone = new JLabel();
        lblphone.setBounds(200, 150, 100, 30);
        add(lblphone);
        
        JLabel labelemail = new JLabel("Email");
        labelemail.setBounds(50, 200, 100, 30);
        add(labelemail);
        
        JLabel lblemail = new JLabel();
        lblemail.setBounds(200, 200, 100, 30);
        add(lblemail);
        
          try {
                       

             connectivity con = new connectivity();
             String query = "select * from employee where emplid  = '"+cEmpId.getSelectedItem()+"'";
            ResultSet rs = con.s.executeQuery(query);
            while(rs.next()) {
                lblname.setText(rs.getString("name"));
                lblphone.setText(rs.getString("phone"));
                lblemail.setText(rs.getString("email"));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
         
           cEmpId.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent ie) {
                try {
                  
                     connectivity con = new connectivity();
                     String query = "select * from employee where emplid = '"+cEmpId.getSelectedItem()+"'";
                    ResultSet rs = con.s.executeQuery(query);
                    while(rs.next()) {
                        lblname.setText(rs.getString("name"));
                        lblphone.setText(rs.getString("phone"));
                        lblemail.setText(rs.getString("email"));
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
          
        delete = new JButton("Delete");
        delete.setBounds(80, 300, 100,30);
        delete.setBackground(Color.BLACK);
        delete.setForeground(Color.WHITE);
        delete.addActionListener(this);
        add(delete);
        
        back = new JButton("Back");
        back.setBounds(220, 300, 100,30);
        back.setBackground(Color.BLACK);
        back.setForeground(Color.WHITE);
        back.addActionListener(this);
        add(back);
        
        ImageIcon i1 = new ImageIcon(ClassLoader.getSystemResource("icons/delete.png"));
        Image i2 = i1.getImage().getScaledInstance(600, 400, Image.SCALE_DEFAULT);
        ImageIcon i3 = new ImageIcon(i2);
        JLabel image = new JLabel(i3);
        image.setBounds(350, 0, 600, 400);
        add(image);
        
         setSize(1000,400);
         setLocation(300,150);
         setVisible(true);
 }

       public void actionPerformed(ActionEvent ae) {
        if (ae.getSource() == delete) {
            try {
               
                connectivity con = new connectivity();
                String query = "delete from employee where emplid = '"+cEmpId.getSelectedItem()+"'";
                con.s.executeUpdate(query);
                JOptionPane.showMessageDialog(null, "Employee Information Deleted Sucessfully");
                setVisible(false);
                new Homepage();
            } catch (Exception e) {
                e.printStackTrace();
            }
        } else {
            setVisible(false);
            new Homepage();
        }
    }

    public static void main (String []args){
        new removeEmployee();
}
}
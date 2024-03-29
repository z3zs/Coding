/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package br.principal;

/**
 *
 * @author Zezinho
 */
public class Principal extends javax.swing.JFrame {

    /**
     * Creates new form Principal
     */
    public Principal() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jToggleButton1 = new javax.swing.JToggleButton();
        comboDia = new javax.swing.JComboBox<>();
        jLabel1 = new javax.swing.JLabel();
        jScrollPane1 = new javax.swing.JScrollPane();
        info = new javax.swing.JList<>();
        Detalhes = new javax.swing.JToggleButton();
        botaoEscolher = new javax.swing.JButton();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel1.setBackground(new java.awt.Color(255, 255, 255));
        jPanel1.setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jToggleButton1.setText("SAIR");
        jToggleButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jToggleButton1ActionPerformed(evt);
            }
        });
        jPanel1.add(jToggleButton1, new org.netbeans.lib.awtextra.AbsoluteConstraints(720, 410, 114, -1));

        comboDia.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Dia 1", "Dia 2", "Dia 3" }));
        comboDia.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                comboDiaActionPerformed(evt);
            }
        });
        jPanel1.add(comboDia, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 20, 90, -1));

        jLabel1.setFont(new java.awt.Font("Segoe UI", 1, 12)); // NOI18N
        jLabel1.setText("Escolha o dia:");
        jPanel1.add(jLabel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(50, 10, -1, 40));

        jScrollPane1.setViewportView(info);

        jPanel1.add(jScrollPane1, new org.netbeans.lib.awtextra.AbsoluteConstraints(250, 10, 560, 100));

        Detalhes.setText("Detalhes ");
        Detalhes.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                DetalhesActionPerformed(evt);
            }
        });
        jPanel1.add(Detalhes, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 80, 90, -1));

        botaoEscolher.setText("Escolher");
        botaoEscolher.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                botaoEscolherActionPerformed(evt);
            }
        });
        jPanel1.add(botaoEscolher, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 50, 90, -1));

        jLabel2.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel2.setIcon(new javax.swing.ImageIcon(getClass().getResource("/br/principal/ifba.png"))); // NOI18N
        jPanel1.add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, -20, 710, 480));

        jLabel3.setHorizontalAlignment(javax.swing.SwingConstants.CENTER);
        jLabel3.setIcon(new javax.swing.ImageIcon(getClass().getResource("/br/principal/feiradesantana160x240px.jpg"))); // NOI18N
        jPanel1.add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(710, 0, 140, 440));

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, 850, javax.swing.GroupLayout.PREFERRED_SIZE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, 441, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 0, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jToggleButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jToggleButton1ActionPerformed
        System.exit(0);
    }//GEN-LAST:event_jToggleButton1ActionPerformed

    private void comboDiaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_comboDiaActionPerformed
        
    }//GEN-LAST:event_comboDiaActionPerformed

    private void DetalhesActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_DetalhesActionPerformed
          Detalhes details = new Detalhes();
          details.setVisible(true);     
    }//GEN-LAST:event_DetalhesActionPerformed

    private void botaoEscolherActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoEscolherActionPerformed
        if (comboDia.getSelectedIndex() == 0){
            Info infos1 = new Info (" Prof. Martinho", "7:00 - 22:00","Exposição Fotografica" );
            Info infos2 = new Info ("", "7:40 - 8:00","Abertura do evento" );
            Info infos3 = new Info (" RAPPER LUAN RICKSON", "10:00 - 10:20","Apresentação cultural" );
            Info infos4 = new Info ("", "10:45 - 11:05","Desfile de moda" );
            Info infos5 = new Info (" Zé das Congas", "11:05 - 12:00","Apresentação Interativa" );
            Info infos6 = new Info (" RAPPER LUIZ GUILHERME", "13:50 - 14:10","Apresentação cultural" );
            Info infos7 = new Info (" Prof. Martinho", "15:30 - 18:30","Oficina de Fotografia" );
            Info infos8 = new Info (" Luiz Gustavo", "15:30 - 18:30","Oficina Yoté" );
            Info infos9 = new Info (" Martinho Souza", "15:30 - 18:30","Oficina Traços Negros e Indígenas" );
            Info infos10 = new Info ("", "15:30 - 18:30","Oficina Reconhecimento Facial e Raça" );           
            
            String[] dados = {infos1.getDados(),infos2.getDados(),infos3.getDados(),infos4.getDados(),infos5.getDados(),infos6.getDados(),infos7.getDados(),infos8.getDados(),infos9.getDados(),infos10.getDados()};
            info.setListData(dados);
        }  
       else if (comboDia.getSelectedIndex() == 1){
            Info infos1 = new Info ("", "7:00 - 18:00","Organização das apresentações pelos Estudantes do Integrado" );
          
            String[] dados = {infos1.getDados()};
            info.setListData(dados);
            
       }
       else if (comboDia.getSelectedIndex() == 2){
            Info infos1 = new Info ("", "8:00 - 12:00","Atividade Interdisciplinar dos estudantes do Integrado" );
                  
            String[] dados = {infos1.getDados()};
            info.setListData(dados);
                  
       }
       
       else {
               
        }
    }//GEN-LAST:event_botaoEscolherActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Windows".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Principal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Principal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Principal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Principal.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Principal().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JToggleButton Detalhes;
    private javax.swing.JButton botaoEscolher;
    private javax.swing.JComboBox<String> comboDia;
    private javax.swing.JList<String> info;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JToggleButton jToggleButton1;
    // End of variables declaration//GEN-END:variables
}

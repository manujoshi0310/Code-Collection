import java.util.*;
import java.io.*;
import javax.swing.*;
import javax.swing.event.TreeSelectionEvent;
import javax.swing.event.TreeSelectionListener;
import javax.swing.filechooser.FileSystemView;
import javax.swing.tree.DefaultMutableTreeNode;
import javax.swing.tree.DefaultTreeModel;
import javax.swing.tree.TreePath;

public class fileManagerGraph {
    
    private static JTree tree;
    private FileSystemView fileSystemView = FileSystemView.getFileSystemView();
    DefaultMutableTreeNode root = new DefaultMutableTreeNode();
    private DefaultTreeModel treeModel = new DefaultTreeModel(root);


    private void showChildren(final DefaultMutableTreeNode node) {
        tree.setEnabled(false);

        SwingWorker<Void, File> worker =
                new SwingWorker<Void, File>() {
                    @Override
                    public Void doInBackground() {
                        File file = (File) node.getUserObject();
                        if (file.isDirectory()) {
                            File[] files = fileSystemView.getFiles(file, true); // !!
                            if (node.isLeaf()) {
                                for (File child : files) {
                                    if (child.isDirectory()) {
                                        publish(child);
                                    }
                                }
                            }
                        }
                        return null;
                    }

                    @Override
                    protected void process(List<File> chunks) {
                        for (File child : chunks) {
                            node.add(new DefaultMutableTreeNode(child));
                        }
                    }
                };
        worker.execute();
    }
    TreeSelectionListener treeSelectionListener = new TreeSelectionListener() {
                        public void valueChanged(TreeSelectionEvent tse) {
                            DefaultMutableTreeNode node =
                                    (DefaultMutableTreeNode) tse.getPath().getLastPathComponent();
                            showChildren(node);
                        }
                    };
    // File[] roots = fileSystemView.getRoots();
    //         for (File fileSystemRoot : roots) {
    //             DefaultMutableTreeNode node = new DefaultMutableTreeNode(fileSystemRoot);
    //             root.add(node);
    //             // showChildren(node);
    //             //
    //             File[] files = fileSystemView.getFiles(fileSystemRoot, true);
    //             for (File file : files) {
    //                 if (file.isDirectory()) {
    //                     node.add(new DefaultMutableTreeNode(file));
    //                 }
    //             }
    //             //
    //         }
    private static TreePath findTreePath(File find) {
        for (int ii = 0; ii < tree.getRowCount(); ii++) {
            TreePath treePath = tree.getPathForRow(ii);
            Object object = treePath.getLastPathComponent();
            DefaultMutableTreeNode node = (DefaultMutableTreeNode) object;
            File nodeFile = (File) node.getUserObject();

            if (nodeFile.equals(find)) {
                return treePath;
            }
        }
        // not found!
        return null;
    }

    
    public static void main(String[] args) {
        String addr = new String("test.txt");
        addr = "C:\\Users\\Manu\\Documents\\MinorProjectDirectory\\" + addr;
        File myObj = new File(addr);
        TreePath treeTest = findTreePath(myObj);
        System.out.println(treeTest.toString());
        //File myObj2 = new File(treeTest.toString());
    }
}
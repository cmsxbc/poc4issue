 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree162(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 21, (DAAL_DATA_TYPE)0.42850000000000005);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 11, (DAAL_DATA_TYPE)0.83950000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 15, (DAAL_DATA_TYPE)0.15350000000000003);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 8, (DAAL_DATA_TYPE)1.6300000000000001);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)-0.0038136944090100852);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)0.0065500498321410779);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)-0.0069431234102107983);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)-0.010574856842868031);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[1], 1, 1, (DAAL_DATA_TYPE)-1.9319999999999997);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 26, (DAAL_DATA_TYPE)1.3285000000000002);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 21, (DAAL_DATA_TYPE)0.9235000000000001);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 17, (DAAL_DATA_TYPE)0.75850000000000006);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)-0.0040259957806590722);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)0.005107279313618646);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.0097304923611940177);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.00532312531556402);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[9], 1, 22, (DAAL_DATA_TYPE)1.8280000000000001);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 22, (DAAL_DATA_TYPE)1.6755000000000002);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 10, (DAAL_DATA_TYPE)-1.4304999999999997);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 14, (DAAL_DATA_TYPE)-0.79249999999999987);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 13, (DAAL_DATA_TYPE)0.83250000000000013);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 5, (DAAL_DATA_TYPE)0.72550000000000014);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)-0.0078043823086080101);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)0.0058327360770532065);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[21], 1, 22, (DAAL_DATA_TYPE)1.0765000000000002);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[25], 0, 19, (DAAL_DATA_TYPE)0.44350000000000006);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0019700914000471432);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)-0.0128192777633667);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)-0.016418144106864929);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[20], 1, 25, (DAAL_DATA_TYPE)1.1705000000000003);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 15, (DAAL_DATA_TYPE)-0.47649999999999992);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 1, (DAAL_DATA_TYPE)0.022500000000000003);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 4, (DAAL_DATA_TYPE)-0.17649999999999996);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)0.002152690012007952);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)0.012195512934587897);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)-0.0037815171114813821);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[31], 1, 10, (DAAL_DATA_TYPE)-1.9124999999999999);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 10, (DAAL_DATA_TYPE)-2.3834999999999993);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)-0.0057213816629803696);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)0.0035056792199611667);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[37], 1, 19, (DAAL_DATA_TYPE)-0.53849999999999987);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)-0.014993971791118383);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[41], 1, 15, (DAAL_DATA_TYPE)0.84050000000000014);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)-0.0005789768677204848);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)-0.01136808225973731);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[30], 1, 6, (DAAL_DATA_TYPE)-0.49449999999999994);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.0013954013306647539);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.014544274258660153);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[19], 1, 10, (DAAL_DATA_TYPE)-1.4024999999999996);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)0.0081330939754843713);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)6.5457028222149613e-05);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[18], 1, 4, (DAAL_DATA_TYPE)-0.052999999999999992);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)-0.00019220498700936635);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.012041858262543021);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[17], 1, 19, (DAAL_DATA_TYPE)0.78450000000000009);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 14, (DAAL_DATA_TYPE)0.95550000000000013);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[56], 0, 14, (DAAL_DATA_TYPE)-0.65449999999999997);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.005553648585919291);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.0071724566030165852);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.0081588431438258686);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.0080877569466829297);

}

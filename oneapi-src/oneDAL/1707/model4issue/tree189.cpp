 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree189(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 15, (DAAL_DATA_TYPE)1.6265000000000003);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 15, (DAAL_DATA_TYPE)1.5545000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 17, (DAAL_DATA_TYPE)0.70250000000000001);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 15, (DAAL_DATA_TYPE)-1.2014999999999998);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 26, (DAAL_DATA_TYPE)0.69750000000000012);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0061715872410465691);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 0, (DAAL_DATA_TYPE)0.46450000000000008);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)-0.0052333282629171245);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[7], 1, 6, (DAAL_DATA_TYPE)0.54250000000000009);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 3, (DAAL_DATA_TYPE)1.0835000000000001);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 14, (DAAL_DATA_TYPE)0.79900000000000015);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)0.0010531842664538607);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.010790273267775775);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)0.010910682336340637);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[9], 1, 27, (DAAL_DATA_TYPE)0.80850000000000011);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)-0.0075706595392978707);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.0027109536764053804);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[4], 1, 14, (DAAL_DATA_TYPE)-0.32549999999999996);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 14, (DAAL_DATA_TYPE)-0.39849999999999997);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 1, (DAAL_DATA_TYPE)-1.3509999999999998);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 17, (DAAL_DATA_TYPE)0.44550000000000006);
    builder.addLeafNode(treeId, nodeIds[21], 0, (DAAL_DATA_TYPE)-0.0068762062955647716);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.0076661162170828055);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[20], 1, 21, (DAAL_DATA_TYPE)1.1775000000000002);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)-0.0022148937046285139);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[24], 1, 13, (DAAL_DATA_TYPE)0.9085000000000002);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 22, (DAAL_DATA_TYPE)1.0835000000000001);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)0.0042318036349920122);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)-0.0083968313038349143);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.0088534574809351133);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)0.0070443021998341602);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[18], 1, 17, (DAAL_DATA_TYPE)0.55150000000000021);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)-0.00058774106951245853);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[32], 1, 17, (DAAL_DATA_TYPE)0.5675);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)-0.0097987641628162984);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[34], 1, 5, (DAAL_DATA_TYPE)0.47150000000000003);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)-0.011028314021329963);
    builder.addLeafNode(treeId, nodeIds[36], 1, (DAAL_DATA_TYPE)-0.0020187972652970002);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[3], 1, 17, (DAAL_DATA_TYPE)0.70550000000000013);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)0.0089174045006866053);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[39], 1, 23, (DAAL_DATA_TYPE)1.8585000000000003);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)0.00029573580873633505);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.0068256561073564721);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[2], 1, 13, (DAAL_DATA_TYPE)0.73250000000000004);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.0085761892659639988);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[44], 1, 5, (DAAL_DATA_TYPE)0.73250000000000004);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.0063130584321226231);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[46], 1, 27, (DAAL_DATA_TYPE)0.94750000000000012);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)0.0014366937738556703);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)-0.0091162793493519238);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[1], 1, 1, (DAAL_DATA_TYPE)-1.3509999999999998);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)-0.0063960029743611816);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[51], 1, 7, (DAAL_DATA_TYPE)-0.87449999999999994);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.003131559413547317);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 0, (DAAL_DATA_TYPE)1.3475000000000004);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 0, (DAAL_DATA_TYPE)0.96850000000000003);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[56], 0, 23, (DAAL_DATA_TYPE)0.99150000000000016);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)0.0088434030657962848);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)-0.00029300256954649319);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.013677831135433298);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)-0.0021678811404854058);

}

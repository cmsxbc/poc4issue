 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree151(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 22, (DAAL_DATA_TYPE)0.72750000000000015);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 6, (DAAL_DATA_TYPE)-0.45849999999999996);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 7, (DAAL_DATA_TYPE)0.86050000000000015);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 2, (DAAL_DATA_TYPE)1.1675000000000002);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)0.0099603695477328627);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.0031936115622520447);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)-0.0024613727768883109);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[2], 1, 11, (DAAL_DATA_TYPE)1.3865000000000001);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 25, (DAAL_DATA_TYPE)0.35850000000000004);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.0070315488924582795);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 13, (DAAL_DATA_TYPE)1.3435000000000004);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 4, (DAAL_DATA_TYPE)0.51550000000000018);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0033214953601648301);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[12], 1, 4, (DAAL_DATA_TYPE)1.0295000000000003);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 1, (DAAL_DATA_TYPE)-0.0084999999999999989);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)0.00039869005836191637);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)-0.013724126324057579);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.0032883850644187386);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.0091172319772239354);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)-0.0076913670051651888);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[1], 1, 25, (DAAL_DATA_TYPE)0.30650000000000005);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 15, (DAAL_DATA_TYPE)-1.3084999999999998);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)-0.007722010392518271);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[22], 1, 6, (DAAL_DATA_TYPE)1.1515000000000002);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 15, (DAAL_DATA_TYPE)-0.06649999999999999);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[25], 0, 2, (DAAL_DATA_TYPE)0.013500000000000002);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)0.00056870310800150037);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.015801521133759929);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[25], 1, 19, (DAAL_DATA_TYPE)0.48250000000000004);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 0, (DAAL_DATA_TYPE)1.1075000000000002);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)-0.0019239774788729848);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)0.0099506022142512463);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)-0.0066841327134639986);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)0.01522159663727507);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[21], 1, 21, (DAAL_DATA_TYPE)0.58250000000000013);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[35], 0, 21, (DAAL_DATA_TYPE)0.44800000000000006);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[36], 0, 1, (DAAL_DATA_TYPE)0.44250000000000006);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)0.0023678728935322656);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)-0.0097995392431039358);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[36], 1, 22, (DAAL_DATA_TYPE)0.77250000000000008);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)-0.0058316282750595187);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[40], 1, 2, (DAAL_DATA_TYPE)-0.90049999999999997);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 25, (DAAL_DATA_TYPE)0.87050000000000016);
    builder.addLeafNode(treeId, nodeIds[43], 0, (DAAL_DATA_TYPE)-0.008262546621263028);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)0.0057177712342568812);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[42], 1, 3, (DAAL_DATA_TYPE)1.5835000000000001);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.0099999240510875286);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)0.00079602863153685705);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[35], 1, 21, (DAAL_DATA_TYPE)0.60350000000000004);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.0075857902623035697);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[49], 1, 22, (DAAL_DATA_TYPE)0.96950000000000014);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 21, (DAAL_DATA_TYPE)1.2310000000000001);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 21, (DAAL_DATA_TYPE)0.89950000000000008);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[53], 0, 11, (DAAL_DATA_TYPE)1.5290000000000001);
    builder.addLeafNode(treeId, nodeIds[54], 0, (DAAL_DATA_TYPE)-0.0018137881334090757);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)0.0046104851771501055);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[53], 1, 1, (DAAL_DATA_TYPE)-1.1034999999999997);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.0034285373202093492);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.0014296367547195158);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.0044366123813108123);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)0.00043132658539328078);

}

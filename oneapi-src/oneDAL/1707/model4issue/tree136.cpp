 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree136(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 14, (DAAL_DATA_TYPE)2.5005000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 9, (DAAL_DATA_TYPE)0.68950000000000011);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 25, (DAAL_DATA_TYPE)1.2185000000000004);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 21, (DAAL_DATA_TYPE)0.79950000000000021);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 26, (DAAL_DATA_TYPE)0.65950000000000009);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)-0.0077581731115396214);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[5], 1, 13, (DAAL_DATA_TYPE)1.0525000000000002);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)0.0012671375707313829);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[7], 1, 5, (DAAL_DATA_TYPE)0.83550000000000002);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.0076546312812715775);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.0032858829945325851);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[4], 1, 3, (DAAL_DATA_TYPE)1.3765000000000003);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 15, (DAAL_DATA_TYPE)-0.20849999999999996);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 4, (DAAL_DATA_TYPE)0.70150000000000012);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)0.0065309271972846519);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[14], 1, 22, (DAAL_DATA_TYPE)1.0575000000000003);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 1, (DAAL_DATA_TYPE)0.081500000000000017);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.0099403786501198119);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)-0.0027184245998368543);
    builder.addLeafNode(treeId, nodeIds[16], 1, (DAAL_DATA_TYPE)-0.0079699600581079732);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[13], 1, 13, (DAAL_DATA_TYPE)1.4485000000000003);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 13, (DAAL_DATA_TYPE)0.41450000000000004);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)0.0090791720881437266);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)-9.9614968427724039e-05);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.010591417636411887);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[12], 1, 21, (DAAL_DATA_TYPE)1.1055000000000004);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[26], 0, 19, (DAAL_DATA_TYPE)1.2125000000000001);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 25, (DAAL_DATA_TYPE)0.73750000000000016);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)-0.0080958187265295391);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[28], 1, 1, (DAAL_DATA_TYPE)-0.05149999999999999);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)0.0047277447608549423);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.0079730828195655103);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)0.0065843118432288364);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[26], 1, 22, (DAAL_DATA_TYPE)1.0305000000000002);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)0.013686272420960925);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)-0.002578325631717841);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[3], 1, 12, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 7, (DAAL_DATA_TYPE)0.063500000000000015);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)-0.010144392042069364);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[38], 1, 10, (DAAL_DATA_TYPE)0.12450000000000001);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.0049125149492816678);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.0064806911783913783);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)0.0064615751965902751);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[2], 1, 17, (DAAL_DATA_TYPE)1.7795000000000003);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.00062512202170015316);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[44], 1, 3, (DAAL_DATA_TYPE)1.7675000000000003);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[46], 0, 1, (DAAL_DATA_TYPE)-0.27949999999999997);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 13, (DAAL_DATA_TYPE)1.4705000000000001);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)0.0093660260133882189);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)0.00022294763220110682);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[47], 1, 21, (DAAL_DATA_TYPE)0.98950000000000016);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 27, (DAAL_DATA_TYPE)0.77450000000000008);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.011927746194414795);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.0014201305084861815);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[51], 1, 4, (DAAL_DATA_TYPE)-0.46549999999999997);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)0.0036048388013362209);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[55], 1, 4, (DAAL_DATA_TYPE)0.51550000000000018);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.015004786492791029);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)-0.0033220928507270639);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.0063582689911862349);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.0066036468262796119);

}

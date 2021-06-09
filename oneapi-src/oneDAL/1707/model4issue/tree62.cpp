 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree62(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 0, (DAAL_DATA_TYPE)2.7735000000000007);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 15, (DAAL_DATA_TYPE)1.6805000000000001);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 5, (DAAL_DATA_TYPE)2.3995000000000002);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 25, (DAAL_DATA_TYPE)1.0675000000000001);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 26, (DAAL_DATA_TYPE)0.85650000000000015);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 25, (DAAL_DATA_TYPE)0.94550000000000012);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 24, (DAAL_DATA_TYPE)1.1915000000000002);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 18, (DAAL_DATA_TYPE)-0.11949999999999998);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 22, (DAAL_DATA_TYPE)0.65250000000000019);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)0.0094420266083695692);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 21, (DAAL_DATA_TYPE)0.90550000000000008);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 18, (DAAL_DATA_TYPE)-1.1774999999999998);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.001092937640075026);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)-0.0066701224969543576);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)-7.7220116956875875e-05);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)0.00057123052149316196);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.011706942282617093);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[6], 1, 17, (DAAL_DATA_TYPE)0.59050000000000014);
    builder.addLeafNode(treeId, nodeIds[18], 0, (DAAL_DATA_TYPE)0.003390666235376288);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)-0.0098169577357016119);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[5], 1, 25, (DAAL_DATA_TYPE)0.76150000000000018);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 5, (DAAL_DATA_TYPE)0.41850000000000004);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)0.0083645155239436362);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[22], 1, 24, (DAAL_DATA_TYPE)0.77950000000000019);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)0.0025763373581223752);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[24], 1, 7, (DAAL_DATA_TYPE)-1.3919999999999997);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)0.003697121867411573);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[26], 1, 22, (DAAL_DATA_TYPE)1.0165000000000002);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 24, (DAAL_DATA_TYPE)1.4245000000000003);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 14, (DAAL_DATA_TYPE)-1.3174999999999997);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)0.003251331506503953);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.008432599015336122);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[29], 1, 25, (DAAL_DATA_TYPE)0.57050000000000012);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)-0.010506826334378938);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)0.0068340352330452355);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[28], 1, 17, (DAAL_DATA_TYPE)1.0105000000000002);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[36], 0, 13, (DAAL_DATA_TYPE)0.59750000000000003);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)-0.0081775115883868672);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)0.0073930564929138541);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[36], 1, 26, (DAAL_DATA_TYPE)0.95850000000000002);
    builder.addLeafNode(treeId, nodeIds[40], 0, (DAAL_DATA_TYPE)0.006443323157727718);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.010066517673689745);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[21], 1, 5, (DAAL_DATA_TYPE)0.46450000000000008);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 0, (DAAL_DATA_TYPE)1.0315000000000001);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.012320778788998725);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)0.0055423774290829899);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[43], 1, 4, (DAAL_DATA_TYPE)1.2695000000000001);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 21, (DAAL_DATA_TYPE)0.40200000000000008);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)-0.0092664540137933661);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)0.0033428329268774329);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[47], 1, 11, (DAAL_DATA_TYPE)-0.081499999999999989);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 21, (DAAL_DATA_TYPE)1.0135000000000003);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)-0.0017723523842340166);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.017013178600205316);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)0.0025429856032133102);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.0015950351351796323);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)0.0050922909827047103);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[2], 1, 13, (DAAL_DATA_TYPE)0.87750000000000006);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)0.011470927059164514);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.00024304956440692363);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.0077274668691176412);

}